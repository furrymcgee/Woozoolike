#include "Strings.hpp"

#include <unordered_map>

namespace
{
	Language language = Language::Korean;
	std::unordered_map<std::string, std::wstring> stringMap;
}

namespace Strings
{
	Language getLanguage()
	{
		return language;
	}

	void load(Language language)
	{
		::language = language;

		if (language == Language::English)
		{
			// HelpState
			stringMap["Commands"] = L"- Commands -";
			stringMap["Command"] = L"move or melee attack";
			stringMap["Command2"] = L"(numpad keys, vi keys,";
			stringMap["Command3"] = L" or arrow keys with PgUp, PgDn, Home, End)";
			stringMap["Command4"] = L"land on/leave a planet, rest once";
			stringMap["Command5"] = L"enter/exit a vehicle, pick up an item";
			stringMap["Command6"] = L"display old messages";
			stringMap["Command7"] = L"select previous/next weapon";
			stringMap["Command8"] = L"drop equipped weapon";
			stringMap["Command9"] = L"fire (q/w to change target, Esc/Tab to cancel)";
			stringMap["Functions"] = L"- Function Keys -";
			stringMap["Zoom"] = L"zoom in/out";
			stringMap["F1"] = L"help (this screen)";
			stringMap["F2"] = L"toggle graphics mode (ASCII/tile)";
			stringMap["F3"] = L"toggle video filter";

			// GameState
			stringMap["OutOfAmmo"] = L"Out of ammo, no more bullets to shoot...";
		
			// World
			stringMap["Welcome"] = L"Hello, astronaut. Welcome to the Universe of Doom!";
			stringMap["Welcome2"] = L"Find the the Amulet of Yendor, and save the universe with it!";
			stringMap["Welcome3"] = L"Press 'F1' or '?' for help at any time.";
			stringMap["FuelEmpty"] = L"Out of fuel, the engine stops...";
			stringMap["OnWhiteHole"] = L"There is a white hole here.";
			stringMap["OnSingularity"] = L"There is the singularity here.";
			stringMap["LandBlackHole"] = L"Thie place is too dangerous to land.";
			stringMap["LandBlackHole2"] = L"The pieces of the amulet shine and protect you.";
			stringMap["Landed"] = L"You land softly on the planet.";
			stringMap["Left"] = L"You left the planet.";
			stringMap["Invade"] = L"You quietly break into the ship.";
			stringMap["Cockpit"] = L"You get up from the cockpit.";
			stringMap["PilotFail"] = L"There are still enemies in the ship.";

			// Sidebar
			stringMap["Health"] = L"Health";
			stringMap["Fuel"] = L"Fuel";
			stringMap["Oxygen"] = L"Oxygen";
			stringMap["Armor"] = L"Armor";
			stringMap["EnterShip"] = L"enter ship";
			stringMap["ExitShip"] = L"exit ship";
			stringMap["GoInside"] = L"go inside";
			stringMap["GoOutside"] = L"go outside";
			stringMap["PilotShip"] = L"pilot ship";
			stringMap["LandOn"] = L"land on";
			stringMap["TakeOff"] = L"take off";
			stringMap["Fire"] = L"fire";
			stringMap["WeaponSwap"] = L"swap weapon";
			stringMap["WeaponDrop"] = L"drop weapon";
			stringMap["PickUp"] = L"pick up";
			stringMap["Escape"] = L"escape";
			stringMap["Destroy"] = L"destroy";
			stringMap["Wait"] = L"wait";

			// ActorData
			stringMap["You"] = L"you";
			stringMap["Alien"] = L"alien";
			stringMap["Birdian"] = L"birdian";
			stringMap["Clay"] = L"clay";
			// d
			stringMap["EvolvedMutant"] = L"evolved mutant";
			stringMap["Folyp"] = L"folyp";
			stringMap["RiotPolice"] = L"galactic riot police";
			// h
			stringMap["Ilyth"] = L"ilyth";
			// j
			// k
			// l
			stringMap["Mutant"] = L"mutant";
			// n
			stringMap["Ooze"] = L"ooze";
			stringMap["Predator"] = L"predator";
			// q
			stringMap["Raider"] = L"raider";
			stringMap["SpaceMarine"] = L"space marine";
			stringMap["Turret"] = L"turret";
			// u
			stringMap["Viper"] = L"viper";
			// w
			// x
			stringMap["Yeti"] = L"yeti";
			stringMap["Zombie"] = L"zombie";
			stringMap["Something"] = L"something";

			// Weapon
			stringMap["CombatKnife"] = L"combat knife";
			stringMap["LaserCutlass"] = L"laser cutlass";
			stringMap["Pistol"] = L"pistol";
			stringMap["Shotgun"] = L"shotgun";
			stringMap["AssaultRifle"] = L"assault rifle";
			stringMap["SniperRifle"] = L"sniper rifle";
			stringMap["RocketLauncher"] = L"rocket launcher";

			// Actor
			stringMap["OxygenLow"] = L"Oxygen is running out! You need to hurry!";
			stringMap["OxygenEmpty"] = L"Out of oxygen, you can not breathe!";
			stringMap["OxygenDied"] = L"You died of lack of oxygen...";

			// Combat
			stringMap["Destroyed"] = L"{1} has been destroyed.";
			stringMap["Graze"] = L"{1} grazes {2}.";
			stringMap["GlanceOff"] = L"{1} glances off {2}.";
			stringMap["Block"] = L"{1} blocks the attack.";
			stringMap["Miss"] = L"miss";
			stringMap["Misses"] = L"misses";
			stringMap["Hit"] = L"hit";
			stringMap["Hits"] = L"hits";
			stringMap["TheBullet"] = L"the bullet";
			stringMap["TheBullets"] = L"the bullets";
			stringMap["TheMissile"] = L"the missile";
			stringMap["TheExplosion"] = L"boom! the explosion";
			stringMap["Slash"] = L"slash";
			stringMap["Slashes"] = L"slashes";
			stringMap["Slice"] = L"slice";
			stringMap["Slices"] = L"slices";
			stringMap["CutOff"] = L"cut off";
			stringMap["CutsOff"] = L"cuts off";
			stringMap["Attack"] = L"{1} {2} {3}.";
			stringMap["Attack2"] = L"{1} {2} {3} for {4} damage.";
			// HACK: Korean
			stringMap["RangedHit"] = L"hit";
			stringMap["RangedHits"] = L"hits";
			stringMap["RangedAttack"] = L"{1} {2} {3}.";
			stringMap["RangedAttack2"] = L"{1} {2} {3} for {4} damage.";
			//
			stringMap["YouDie"] = L"You die...";
			stringMap["Kill"] = L"{1} dies.";

			// AI
			stringMap["Notice"] = L"{1} notices {2}.";

			// Armor
			stringMap["Shield"] = L"shield";
			stringMap["Helmet"] = L"helmet";
			stringMap["BodyArmor"] = L"body armor";
			stringMap["WearArmor"] = L"You pick up and wear {1}.";
			stringMap["PickUpArmor"] = L"You pick up {1}.";

			// Medikit
			stringMap["Medkit"] = L"medkit";
			stringMap["UseMedkit"] = L"You pick up and use {1}. You feel better.";

			// Amulet
			stringMap["AmuletPiece"] = L"amulet piece";
			stringMap["AmuletAll"] = L"You collected all pieces of the amulet!";
			stringMap["AmuletAll2"] = L"You now have the complete Amulet of Yendor.";
			stringMap["AmuletThree"] = L"The pieces become one, but there are still missing pieces.";
			stringMap["AmuletThree2"] = L"You can now land on the black hole.";
			stringMap["AmuletGet"] = L"You now have a piece of the Amulet of Yendor.";
			stringMap["AmuletGet2"] = L"You now have {1} pieces of the Amulet of Yendor.";

			// Equipment
			stringMap["DropFail"] = L"There is something there already.";
			stringMap["DropWeapon"] = L"{1} dropped {2}.";
			stringMap["DiscardWeapon"] = L"{1} discarded {2}.";
			stringMap["DropArmor"] = L"{1} dropped {2}.";
			stringMap["TakeAmmo"] = L"You get ammo and load your {1}."; // L"You now have {1}.";
			stringMap["AmmoFull"] = L"You have enough ammo already.";
			stringMap["AlreadyHave"] = L"You already have this kind of weapon.";
			stringMap["PickUpWeapon"] = L"You pick up and grap {1}.";

			// PauseState
			stringMap["Return"]		= L"Return ";
			stringMap["Restart"]	= L"Restart"; // New galaxy
			stringMap["Quit"]		= L"Quit   ";

			// VictoryState
			stringMap["Victory"] = L"The Amulet of Yendor twinkles, it lets you pass the white hole.";
			stringMap["Victory2"] = L"You escaped to another galaxy.";
			stringMap["Victory3"] = L"You put the Amulet of Yendor on the singularity.";
			stringMap["Victory4"] = L"The black hole destroys and you save the galaxy.";
			stringMap["YouWon"] = L"You won!";
			stringMap["SpacePirate"] = L"Space Pirate: You invaded all spaceships.";
			stringMap["PlanetExplorer"] = L"Planet Explorer: You visited all planets.";
		}

		else if (language == Language::Korean)
		{
			// HelpState
			stringMap["Commands"] = L"- ����Ű -";
			stringMap["Command"] = L"�̵� �Ǵ� ���� ����";
			stringMap["Command2"] = L"(�����е�, vi Ű,";
			stringMap["Command3"] = L" �Ǵ� ȭ��ǥŰ + PgUp, PgDn, Home, End)";
			stringMap["Command4"] = L"�༺ ����/�̷�, ���� ����";
			stringMap["Command5"] = L"Ż�� Ÿ��/������, ������ �ݱ�";
			stringMap["Command6"] = L"���� �޽��� ����";
			stringMap["Command7"] = L"����/���� ���� ����";
			stringMap["Command8"] = L"�������� ���� ������";
			stringMap["Command9"] = L"�߻� (q/w ��ǥ ����, Esc/Tab ���)";
			stringMap["Functions"] = L"- ���Ű -";
			stringMap["Zoom"] = L"ȭ�� Ȯ��/���";
			stringMap["F1"] = L"���� (�� ȭ��)";
			stringMap["F2"] = L"�׷��� ��� (�ƽ�Ű/Ÿ��)";
			stringMap["F3"] = L"ȭ�� ���� ȿ�� ���";

			// GameState
			stringMap["OutOfAmmo"] = L"ź���� �� ��������. �� �̻� �� �Ѿ��� ����...";

			// World
			stringMap["Welcome"] = L"�������, ���� �����ڴ�. ����� ���ֿ� ���� ���� ȯ���մϴ�!";
			stringMap["Welcome2"] = L"������ ������ ã�� �� ���ָ� �����ּ���!";
			stringMap["Welcome3"] = L"'F1' �Ǵ� '?' Ű�� ������ �������� ������ �� �� �ֽ��ϴ�.";
			stringMap["FuelEmpty"] = L"���ᰡ ����. ������ �����ߴ�...";
			stringMap["OnWhiteHole"] = L"���⿡ ȭ��ƮȦ�� �ִ�.";
			stringMap["OnSingularity"] = L"���⿡ Ư������ �ִ�.";
			stringMap["LandBlackHole"] = L"�� ���� �����ϴ� ���� �ʹ� �����غ��δ�."; // ���� ������(Dark energy)
			stringMap["LandBlackHole2"] = L"������ ���� �������� ���ּ��� ��ȣ�Ѵ�.";
			stringMap["Landed"] = L"�����ϰ� ���� �����ߴ�.";
			stringMap["Left"] = L"�༺�� ������.";
			stringMap["Invade"] = L"������ ���ּ� ������ ħ���ߴ�.";
			stringMap["Cockpit"] = L"���������� �Ͼ��.";
			stringMap["PilotFail"] = L"���� ���ּ� �ȿ� ���� �����ִ�.";

			// Sidebar
			stringMap["Health"] = L"ü��";
			stringMap["Fuel"] = L"����";
			stringMap["Oxygen"] = L"���";
			stringMap["Armor"] = L"���";
			stringMap["EnterShip"] = L"���ּ� ž��";
			stringMap["ExitShip"] = L"���ּ� ������";
			stringMap["GoInside"] = L"���ּ� ������";
			stringMap["GoOutside"] = L"���ּ� ������";
			stringMap["PilotShip"] = L"���ּ� ����";
			stringMap["LandOn"] = L"����";
			stringMap["TakeOff"] = L"�̷�";
			stringMap["Fire"] = L"�߻�";
			stringMap["WeaponSwap"] = L"���� ��ü";
			stringMap["WeaponDrop"] = L"���� ������";
			stringMap["PickUp"] = L"�ݱ�";
			stringMap["Escape"] = L"Ż���ϱ�";
			stringMap["Destroy"] = L"�ı��ϱ�";
			stringMap["Wait"] = L"���";

			// ActorData
			stringMap["You"] = L"���";
			stringMap["Alien"] = L"���ϸ���";
			stringMap["Birdian"] = L"�����";
			stringMap["Clay"] = L"���ΰ�";
			// d
			stringMap["EvolvedMutant"] = L"��ȭ ��������";
			stringMap["Folyp"] = L"���� ���ĸ�";
			stringMap["RiotPolice"] = L"���� ����";
			// h
			stringMap["Ilyth"] = L"�����ΰ�";
			// j
			// k
			// l
			stringMap["Mutant"] = L"��������";
			// n
			stringMap["Ooze"] = L"���� ����";
			stringMap["Predator"] = L"������";
			// q
			stringMap["Raider"] = L"������";
			stringMap["SpaceMarine"] = L"���� �غ�";
			stringMap["Turret"] = L"���� ��ž";
			// u
			stringMap["Viper"] = L"���� ����";
			// w
			// x
			stringMap["Yeti"] = L"����";
			stringMap["Zombie"] = L"����";
			stringMap["Something"] = L"����";

			// Actor
			stringMap["OxygenLow"] = L"��Ұ� �����ϴ�! ���ѷ��� �Ѵ�.";
			stringMap["OxygenEmpty"] = L"��Ұ� ����. ���� �� ���� ����!";
			stringMap["OxygenDied"] = L"�����ؼ� �׾���...";

			// Combat
			stringMap["Destroyed"] = L"{1}[��|��] �ı��Ǿ���.";
			stringMap["Graze"] = L"{1}[��|��] {2}[��|��] ���ƴ�."; // �Ѿ��� ����� ���ƴ�.
			stringMap["GlanceOff"] = L"{1}[��|��] {2}�� ƨ�ܳ�����."; // �Ѿ��� ���п� ƨ�ܳ�����.
			stringMap["Block"] = L"{1}[����|��] ������ ���Ҵ�."; // ���з� ������ ���Ҵ�.
			stringMap["Miss"] = L"��������";
			stringMap["Misses"] = L"��������";
			stringMap["Hit"] = L"�����ߴ�";
			stringMap["Hits"] = L"�����ߴ�";
			stringMap["TheBullet"] = L"�Ѿ�";
			stringMap["TheBullets"] = L"�Ѿ�";
			stringMap["TheMissile"] = L"�̻���";
			stringMap["TheExplosion"] = L"��! ����";
			stringMap["Slash"] = L"������";
			stringMap["Slashes"] = L"������";
			stringMap["Slice"] = L"������";
			stringMap["Slices"] = L"������";
			stringMap["CutOff"] = L"�񷶴�";
			stringMap["CutsOff"] = L"�񷶴�";
			stringMap["Attack"] = L"{1}[��|��] {3}[��|��] {2}.";
			stringMap["Attack2"] = L"{1}[��|��] {3}[��|��] {2}. {4}�� ���ظ� �־���.";
			// HACK: Korean
			stringMap["RangedHit"] = L"�����ߴ�";
			stringMap["RangedHits"] = L"�����ߴ�";
			stringMap["RangedAttack"] = L"{1}[��|��] {3}�� {2}.";
			stringMap["RangedAttack2"] = L"{1}[��|��] {3}�� {2}. {4}�� ���ظ� �־���.";
			//
			stringMap["YouDie"] = L"�׾���...";
			stringMap["Kill"] = L"{1}[��|��] �׾���.";

			// AI
			stringMap["Notice"] = L"{1}[��|��] {2}[��|��] �˾�ë��.";

			// Weapon
			stringMap["CombatKnife"] = L"���� ������"; // ���� �ܰ�, �Ĺ� ������
			stringMap["LaserCutlass"] = L"������ ��";
			stringMap["Pistol"] = L"����";
			stringMap["Shotgun"] = L"��ź��";
			stringMap["AssaultRifle"] = L"���� ����";
			stringMap["SniperRifle"] = L"���� ����";
			stringMap["RocketLauncher"] = L"���� ��ó"; // ���� �߻��

			// Armor
			stringMap["Shield"] = L"����";
			stringMap["Helmet"] = L"���";
			stringMap["BodyArmor"] = L"��ź��";
			stringMap["WearArmor"] = L"{1}[��|��] �����ߴ�.";
			stringMap["PickUpArmor"] = L"{1}[��|��] ȹ���ߴ�.";

			// Medikit
			stringMap["Medkit"] = L"���� ����"; // �޵�Ŷ
			stringMap["UseMedkit"] = L"{1}[��|��] �ֿ� ����ߴ�. ���°� ��������.";

			// Amulet
			stringMap["AmuletPiece"] = L"���� ����";
			stringMap["AmuletAll"] = L"��� ���� ������ ��Ҵ�!";
			stringMap["AmuletAll2"] = L"������ ������ ������ ȹ���ߴ�.";
			stringMap["AmuletThree"] = L"�������� �ϳ��� �Ǿ���. �׷��� ���� ������ ������ �ִ�.";
			stringMap["AmuletThree2"] = L"���� ��Ȧ�� ������ �� �ִ�.";
			stringMap["AmuletGet"] = L"������ ���� ���� �ϳ��� ȹ���ߴ�.";
			stringMap["AmuletGet2"] = L"������ ���� ������ {1}��° ȹ���ߴ�.";

			// Equipment
			stringMap["DropFail"] = L"�̰����� �̹� �ٸ� �������� �ִ�.";
			stringMap["DropWeapon"] = L"{1}[��|��] {2}[��|��] ����߷ȴ�.";
			stringMap["DiscardWeapon"] = L"{1}[��|��] {2}[��|��] ���ȴ�.";
			stringMap["TakeAmmo"] = L"{1}�� ź���� ä����.";
			stringMap["AmmoFull"] = L"�̹� ź���� ����ϴ�.";
			stringMap["AlreadyHave"] = L"�� ������ ����� �̹� ������ �ִ�.";
			stringMap["PickUpWeapon"] = L"{1}[��|��] ��������.";
			stringMap["DropArmor"] = L"{1}[��|��] {2}[��|��] ���ȴ�.";

			// PauseState
			stringMap["Return"]		= L"���ư���";
			stringMap["Restart"]	= L"����� ";
			stringMap["Quit"]		= L"����  ";

			// VictoryState
			stringMap["Victory"] = L"������ ������ ��¦�̸� ȭ��ƮȦ�� ����ߴ�.";
			stringMap["Victory2"] = L"����� �ٸ� ���ַ� �����ƴ�.";
			stringMap["Victory3"] = L"������ ������ Ư���� ���� �������Ҵ�.";
			stringMap["Victory4"] = L"��Ȧ�� ������� ����� �� ���ָ� ���ѳ´�.";
			stringMap["YouWon"] = L"�¸��߽��ϴ�!";
			stringMap["SpacePirate"] = L"���� ����: ��� ���ּ��� ħ���ߴ�.";
			stringMap["PlanetExplorer"] = L"�༺ Ž�谡: ��� �༺�� �湮�ߴ�.";
		}
	}

	std::wstring get(const std::string& id)
	{
		return stringMap[id];
	}
}