#include "robot_simulator.h"
#include <stdexcept>

namespace robot_simulator
{
    Bearing Robot::get_bearing() const
    {
        return bearing;
    }

    std::pair<int, int> Robot::get_position() const
    {
        return position;
    }

    void Robot::execute_sequence(const std::string &Command)
    {
        if(Command == "")
        {
            throw std::domain_error("Command is empty");
        }
        for(char c : Command)
            {
                switch(c)
                    {
                        case 'R':{ turn_right();break;}
                        case 'L':{turn_left();break;}
                        case 'A':{advance();break;}
                    }
            }
    }

    void Robot::turn_right()
    {
        change_direction(1);
    }

    void Robot::turn_left()
    {
        change_direction(-1);
    }

    void Robot::advance()
    {
        switch(bearing)
        {
            case Bearing::NORTH:
            position.second +=1;
            break;
            case Bearing::SOUTH:
            position.second -=1;
            break;
            case Bearing::EAST:
            position.first +=1;
            break;
            case Bearing::WEST:
            position.first -=1;
            break;
            default:
            // Handle unexpected bearing value
            throw std::domain_error("Invalid bearing value");
        }
    }

    void Robot::robot_position(std::pair<int,int>pos)
    {
        position = pos;
    }

    void Robot::change_direction(int n)
    {
        int currentSide = static_cast<Bearing>(bearing);
        int newSide = currentSide + n;
        if(newSide > 3 )
        {
            newSide = 0;
        }
        else if (newSide < 0)
        {
            newSide =3;
        }
        Bearing Direction = static_cast<Bearing>(newSide);

        switch (Direction)
        {
            case NORTH:
                bearing = NORTH;
                break;
            case EAST:
                bearing = EAST;
                break;
            case SOUTH:
                bearing = SOUTH;
                break;
            case WEST:
                bearing = WEST;
                break;
        }
    }

    void Robot::robot_bearing(const Bearing& newBearing)
    {
        bearing = newBearing;
    }
}  // namespace robot_simulator
