#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H
#include <string>
#include <utility>
namespace robot_simulator
{
    enum Bearing{NORTH,EAST,SOUTH,WEST};
    class Robot
    {
    public:
        Robot(){}

        [[maybe_unused]] Robot(std::pair<int,int>pos,Bearing newBearing):position(pos),bearing(newBearing){}
        Bearing get_bearing()const;
        std::pair<int,int> get_position()const;
        void execute_sequence(const std::string& Command);
        void turn_right();
        void turn_left();
        void advance();
        void robot_position(std::pair<int,int>pos);
        void robot_bearing(const Bearing& newBearing);
    private:
        void change_direction(int n);
        std::pair<int,int> position={0,0};
        Bearing bearing=Bearing::NORTH;
        int Acceleration=0;
    };
}  // namespace robot_simulator

#endif // ROBOT_SIMULATOR_H