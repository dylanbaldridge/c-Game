// this is a dungoun and dragon style game






#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime>


using namespace std;

int main()
{
   // ------- dungen style game where the player selects "left" "right" "center" moving through to fight monsters to lvl up and find loot with final boss.
	char eatMushroom;
	char backpack;
	int  playerCararacter;
	int playerHealth = 100;
	int playerDamage;
	int playerDexterity;
	string playerWeapon = "";
    int playerChoice1;






	cout << "Welcome to the Dungen of Eldar " << "\n" << "\n";
	
	
	
	
	// need to add game instructions so play knows what to do, the game play
	
	
	
	
	
	
	cout << "These are your Character choices Choose one wisely." << "\n" << "\n";
	cout << "Mage" << "------" << "1" << "\n";
	cout << "Warrior" << "------" << "2" << "\n";
	cout << "Elf" << "------" << "3" << "\n" << "\n";
	cout << "select your character: ";
	cin >> playerCararacter;

//character selection
	switch (playerCararacter) {
	case 1:
		playerWeapon = "Wizard's Staff";
		playerDamage = 6;
		playerDexterity = 7;
		cout << "\n";
		cout << "GOOD CHOICE!!" << "\n" << "\n";
		cout << "You are a Mage" << "\n";
		cout << "Your Health is: " << playerHealth << "\n";
		cout << "Your Dexterity is: " << playerDexterity << "\n";
		cout << "Your weapon is: " << playerWeapon << "\n";	
		cout << "Your  Weapon deals " << playerDamage << " Damage." << "\n";

		break;

	case 2:
		playerWeapon = "King's Sword";
		playerDamage = 10;
		playerDexterity = 5;
		cout << "\n";
		cout << "GOOD CHOICE!!" << "\n" << "\n";
		cout << "You are a Warrior" << "\n";
		cout << "Your Health is: " << playerHealth << "\n";
		cout << "Your Dexterity is: " << playerDexterity << "\n";
		cout << "Your weapon is: " << playerWeapon << "\n";
		cout << "Your  Weapon deals " << playerDamage <<  " Damage." << "\n";
		break;

	case 3:
		playerWeapon = "Grand Bow";
		playerDamage = 8;
		playerDexterity = 8;	
		cout << "\n";
		cout << "GOOD CHOICE!!" << "\n" << "\n";
		cout << "You are a Elf" << "\n";
		cout << "Your Health is: " << playerHealth << "\n";
		cout << "Your Dexterity is: " << playerDexterity << "\n";
		cout << "Your weapon is: " << playerWeapon << "\n";
		cout << "Your  Weapon deals " << playerDamage << " Damage." << "\n";
		break;
	
	default:
		cout << "\n";
		cout << "you did not select a number 1-3 "<< "\n";
		cout << "YOU ARE KICK OUT OF THE DUNGOUN";
	};

	
	
	
	
	
	
	
	cout << "\n" << "\n";
	cout << "YOU NOW ENTER THE DUNGOUN" << "\n";
	cout  << "\n";
	cout << "Left------ 1" << "\n";
	cout << "Middle------ 2" << "\n";
	cout << "Right------ 3" << "\n" << "\n";
	cout << "Choose your path: ";
	cin >> playerChoice1;


	
	// players first choice made

	switch (playerChoice1) {
	case 1:
		cout << "\n";
		cout << "Your choose the Left Path" << "\n" << "\n";
		cout << "Ahead of you if a Backpack." << "\n";
		cout << "Do you search the backpack? (Y OR N) : "; 
		cin >> backpack;
		

		if (backpack == 'Y') {
			cout << "\n";
			cout << "You open the backpack and search it contents." << "\n";
			srand(time(NULL));
			int randomNum1 = rand() % 20 + 1;
			if (randomNum1 >= 13) {
				playerHealth = playerHealth + 10;
				cout << "You found a medkit" << "\n";
				cout << "You put your medkit on" << "\n";
				cout << "Your health has increased by 10" << "\n";
				cout << "Your new health is: " << playerHealth << "\n";
			 }
			else {
				cout << "You found nothing but an empty bag." << "\n";
				cout << "Better luck next time" << "\n";
				cout << "You see light ahead you walk towards it" << "\n" << "\n";
			}

		}

		else {
			cout << "YOU DID NOT SELECT COREECTLY YOU FELL THROUGH A TRAP DOOR AND  DIED" << "\n";
			cout << "GAMEOVER!!";
		}

		break;


	case 2:
		cout << "\n";
		cout << "Your choose the Middle Path" << "\n" << "\n";
		cout << "As you walk through the tunnels you come across nothing" << "\n";
		cout << "Maybe you took a wrong turn" << "\n";
		cout << "You see light ahead you walk towards it" << "\n" << "\n";
		break;


	case 3:
		cout << "\n";
		cout << "Your choose the Right Path" << "\n" << "\n";
		cout << "You find a White spotted Purple Mushroom." << "\n";
		cout << "Do you want to eat this Mushroom Y or N? (HINT: think of mario)" << "\n";
		cout << "Eat the Mushroom: ";
		cin >> eatMushroom;


		if (eatMushroom == 'Y') {
			if (playerCararacter == 1) {
				cout << "Being a mage you took the mushrrom and ate it." << "\n";
				cout << "you feel your body tingle as the affects come in." << "\n";

				srand(time(NULL));
				int randomNum1 = rand() % 20 + 1;
				if (randomNum1 <= 6) {
					playerHealth = (playerHealth - 10);
					cout << "\n";
					cout << "That mushroom didnt seat right you lost health" << "\n";
					cout << "You Health is now: " << playerHealth << "\n";
				}
				playerDamage = (randomNum1 * .5) + playerDamage;
				cout << "Your damage has increased by: " << (randomNum1 * .5) << "\n";
				cout << "Your new Damage is: " << playerDamage << "\n" << "\n";


				cout << "You see light ahead you walk towards it" << "\n" << "\n";
			}
			else if (playerCararacter == 2) {
				cout << "Being a Warrior you took the mushroom and ate it." << "\n";
				cout << "Your sight starts to get fuzzy and everything starts to get dark." << "\n";
				cout << "MAYBE the mushroom was a bad......" << "\n";
				srand(time(NULL));
				int randomNum1 = rand() % 20 + 1;
				;
				if (randomNum1 <= 10) {
					playerHealth = (playerHealth - 10);
					cout << "\n";
					cout << "That mushroom didnt seat right you lost health" << "\n";
					cout << "You Health is now: " << playerHealth << "\n";
				};
				playerDamage = (randomNum1 * .25) + playerDamage;
				cout << "your damage has increased by: " << (randomNum1* .25) << "\n";
				cout << "Your new Damage is: " << playerDamage << "\n" << "\n";


				cout << "You see light ahead you walk towards it" << "\n" << "\n";
			}
			else if (playerCararacter == 3) {
				cout << "Being a Elf you took the mushroom and ate it." << "\n";
				cout << "you feel your ears stand up as the power rushs through you." << "\n";				
				srand(time(NULL));
				int randomNum1 = rand() % 20 + 1;
				if (randomNum1 <= 7) {
					playerHealth = (playerHealth - 10);
					cout << "\n";
					cout << "That mushroom didnt seat right you lost health" << "\n";
					cout << "You Health is now: " << playerHealth << "\n";
				};
				playerDamage = (randomNum1 * .75) + playerDamage;
				cout << "your damage has increased by: " << (randomNum1 * .75) << "\n";
				cout << "Your new Damage is: " << playerDamage << "\n" << "\n";


				cout << "You see light ahead you walk towards it" << "\n" << "\n";
			}

		}

		else if (eatMushroom == 'N') {
			cout << "\n";
			cout << "You sheepishly back away from the mushroom and continue down the hallway." << "\n" ;
			cout << "You see light ahead you walk towards it" << "\n" << "\n";
		}

		else {
			cout << "YOU DID NOT SELECT COREECTLY YOU TOUCHED THE POSION MUSHROOM AND  DIED" << "\n";
			cout << "GAMEOVER!!";
		}
		break;

	}


	// second choice made









	// -----------traps that takes a "roll of dice" and certian traps have dexertiry checks..
	//---------- if fail on trap loose set life
	// ---------- also add food that could be positive but could be negitive

	
	
	
	
}


