#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class Player{
  public:
  Player();
  Player(int num);
  void Blood();
  void Get_player_name(char name[]);

  protected:
  int Player_blood;
  int Player_num;
  char *Player_name;
};
Player::Player(int num)
{
    Player_num=num;
}
void Player::Blood()
{
    Player_blood=4;
}
void Player::Get_player_name(char name[])
{
     Player_name=name;
}
class action:protected virtual Player{
    public:
    char Deing();

};
char action::Deing()
{
}
main()
{

}
