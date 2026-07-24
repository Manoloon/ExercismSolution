namespace targets {
// TODO: Insert the code for the alien class here
class Alien
{
public:
    Alien(int x,int y):x_coordinate(x),y_coordinate(y){}
int x_coordinate;
int y_coordinate;
int get_health() const{return health;}
bool hit(){
    if(health>0) health -=1;
    return true;
    }
bool is_alive() const {return health>0;}
bool teleport(int x_new,int y_new){
    x_coordinate = x_new;
    y_coordinate = y_new;
    return true;
}
bool collision_detection(const Alien& Other){
    return (this->x_coordinate == Other.x_coordinate && this->y_coordinate ==  Other.y_coordinate);
}
private:
int health =3;
};
}  // namespace targets