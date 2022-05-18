#include<iostream>

using namespace std;

class Enemy 
{
	protected:
		int attackPower;
	public:
		void setAttackPower(int a)
		{
			attackPower = a;
		}
};

class Nice 
{
protected: 
	int attackPower;
public: 
	void setAttackPower(int a)
	{
		attackPower = a;
	}

};

class Ninja : public Enemy // inheritance
{
	public:
		void attack()
		{
			cout << "i am a ninja, ninja chop! - " << attackPower << endl;
		}
};

class Monster : public Enemy // inheritance
{
	public:
		void attack()
		{
			cout << "i'm a monster i must eat you!!!!" << attackPower << endl;
		}
};

class Alien : public Nice // inheritance 
{
public: 
	void attack()
	{
		cout << "I am a nice person dont come near me. I will shoot you dude!!!!" << attackPower << endl;
	}
};

int main()
{
	Ninja n;
	Alien i;
	Monster m;
	Nice* nice1 = &i;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);
	nice1->setAttackPower(50);
	i.attack();
	n.attack();
	m.attack();

	system("Pause");
	return 0;
}
