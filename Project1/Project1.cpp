#include <iostream>
#include <string>
using namespace std;

enum WeaponType
{
	None = -1,
	Pistol = 0,
	Rifle = 1,
	GranadeLauncher = 2,
	Shotgun = 3,
	Count = 4
};

static string WeaponNames[] = { "Pistol", "Rifle", "Granade Launcher", "Shotgun" };

struct WeaponTypeData
{
	WeaponType m_Enum;
	string m_WeaponName;
};

int main()
{
	WeaponTypeData listOfPossibleWeapons[WeaponType::Count];

	for (int i = 0; i < WeaponType::Count; ++i)
	{
		listOfPossibleWeapons[i].m_Enum = (WeaponType)i;
		listOfPossibleWeapons[i].m_WeaponName = WeaponNames[i];
	}

	WeaponType mainPlayerWeapon = WeaponType::None;

	for (int i = 0; i < WeaponType::Count; ++i)
	{
		cout << "Weapon type: " << listOfPossibleWeapons[i].m_WeaponName << endl;
	}

	return 0;
}