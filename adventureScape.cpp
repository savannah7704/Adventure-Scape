// ADVENTURE SCAPE BY SAVANNAH STUMPF

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{

    string playerAnswer;

    cout << "Welcome to Adventure Scape. This is an interactive text based adventure game. Along your journey, you will be presented with different choices that will take the story on different paths. Simply type in your choice and press enter in order to continue your adventure. Have fun! ";
    cout << "PRESS ENTER WHEN YOU ARE READY TO BEGIN.";
    getline(cin, playerAnswer);
    cin.ignore(100, '\n');
    

    cout << "You are a skilled archaeologist and explorer. You are on a quest to find a mythical ancient Egyptian artifact called the Tablet of Spellbinding. ";
    cout << "According to legend, the engravings on the tablet are said to tell the secret to obtaining magical powers. ";
    cout << "The mere thought of acquiring such an item entices you. You eagerly embark on your journey, closely grasping a pendant you acquired from a previous journey that is said to glow when it is close to the ancient tomb containing the tablet. ";
    cout << "After trekking through a ferocious sandstorm, you arrive at a location that makes your pendant shine brightly. Suddenly, a beam of light shoots out of the pendant. You follow the light and arrive at an abandoned tomb. You take a deep breath and head inside. ";
    cout << "PRESS ENTER.";
    getline(cin, playerAnswer);
    cin.ignore(100, '\n');

    cout << "The room is dark and dank. You light a torch and examine the room. There are ancient carvings on the walls and cobwebs littered across the ceiling. A putrid smell fills your nostrils. Red vases are placed neatly in a row. ";
    cout << "After walking down a dark corridor, you come across a branching pathway. Do you go LEFT or RIGHT? ";
    getline(cin, playerAnswer);
    cin.ignore(100, '\n');

    if (playerAnswer == "left" || playerAnswer == "LEFT" || playerAnswer == "Left")
    {
        system("cls");
        cout << "You enter an empty room. You see a doorway on the other side. After taking a few steps forward, the doorway slams shut and the walls begin closing in! ";
        cout << "Your eyes dart around the room and spot a small lever above the doorway. Do you try the LEVER or find ANOTHER WAY? ";
        getline(cin, playerAnswer);
        cin.ignore(100, '\n');

        if (playerAnswer == "lever" || playerAnswer == "LEVER" || playerAnswer == "Lever")
        {
            system("cls");
            cout << "You sprint as fast as you can to the other end of the room. The walls are getting closer and closer. You jump off one of the walls, propelling yourself upwards towards the lever. ";
            cout << "You wrap your hands around the lever. As the force of gravity pulls you down, the lever also goes downwards. ";
            cout << "The walls come to a halt just in time. The doorway opens. You enter the next room. ";
            cout << "PRESS ENTER. ";
            getline(cin, playerAnswer);
            cin.ignore(100, '\n');
            system("cls");
            cout << "In the next room, the walls are black. As you take a closer look, a black spider falls at your feet. The realization sets in: This room is covered in spiders! ";
            cout << "You attempt to ignore them and make your way towards the next room, but the spiders suddenly start swarming towards you! ";
            cout << "How will you take care of them? Will you try to SQUISH them or BURN them? ";
            getline(cin, playerAnswer);
            cin.ignore(100, '\n');

            if (playerAnswer == "squish" || playerAnswer == "SQUISH" || playerAnswer == "Squish")
            {
                system("cls");
                system("color C0");
                cout << "You stomp on the spiders, attempting to crush them. However, there are far too many and they overpower you! They crawl over your entire body and feast on your flesh. ";
                cout << "YOU HAVE DIED. ";
            }
            else if (playerAnswer == "burn" || playerAnswer == "BURN" || playerAnswer == "Burn")
            {
                //final room
                system("cls");
                cout << "You wave your torch around, igniting the spiders coming near you. The fire quickly spreads across all of them. ";
                cout << "You hastily run away to the next room, leaving the fiery inferno of burning spiders behind you. ";
                cout << "You enter a dim corridor. As you exit the corridor, you find yourself in a large chamber. Dust is scattered throughout the air and unlit torches line the walls. A pedastal stands in the middle with a ray of light shining upon it through a crack in the ceiling. ";
                cout << "On the pedastal you see... the Tablet of Spellbinding! ";
                cout << "You slowly approach the tablet and reach for it. You hold it in your arms and examine it. It has an iridescent glow.";
                cout << "Unfortunately, you aren't able to admire the treasure for very long. The torches along the walls suddenly ignite and the ground begins to shake! It's time to get out of here! ";
                cout << "PRESS ENTER. ";
                getline(cin, playerAnswer);
                cin.ignore(100, '\n');
                cout << "You run back the way you came, but part of the ceiling collapses and blocks your way. You hastily look around. Your eyes are drawn to the hole at the top of the ceiling, but you also spot a crack in the wall. ";
                cout << "It's time to think fast! Do you KICK the wall or CLIMB to the ceiling? ";
                getline(cin, playerAnswer);
                cin.ignore(100, '\n');

                if (playerAnswer == "kick" || playerAnswer == "KICK" || playerAnswer == "Kick")
                {
                    system("cls");
                    system("color A0");
                    cout << "You kick the wall and it gives way, leaving a larger gap that is just big enough to squeeze through. ";
                    cout << "Congratulations! You have successfully obtained the Tablet of Spellbinding! ";

                }
                else if (playerAnswer == "climb" || playerAnswer == "CLIMB" || playerAnswer == "Climb")
                {
                    system("cls");
                    cout << "You reach into your knapsack and take out a grappling hook with a rope attached. You throw the grappling hook towards the hole in the ceiling and it catches on. ";
                    cout << "You can't climb the rope with the tablet in your hands. Will you put it in your KNAPSACK or LEAVE IT behind? ";
                    getline(cin, playerAnswer);
                    cin.ignore(100, '\n');

                    if (playerAnswer == "knapsack" || playerAnswer == "KNAPSACK" || playerAnswer == "Knapsack")
                    {
                        system("cls");
                        system("color A0");
                        cout << "You manage to squeeze the tablet into you knapsack. It barely fits. You quickly climb the rope as the tomb crumbles around you. ";
                        cout << "Thankfully you, reach the top and manage to escape with the tablet. Congratulations! ";
                    }
                    else if (playerAnswer == "leave it" || playerAnswer == "LEAVE IT" || playerAnswer == "Leave it" || playerAnswer == "leave It" || playerAnswer == "Leave It")
                    {
                        system("cls");
                        system("color E0");
                        cout << "You manage to escape the tomb, however you were unsuccessful in your endeavor to obtain the Tablet of Spellbinding.";
                    }

                }

            }
        }
        else if (playerAnswer == "another way" || playerAnswer == "ANOTHER WAY" || playerAnswer == "Another way" || playerAnswer == "Another Way")
        {
            system("cls");
            system("color C0");
            cout << "You frantically look for another way out. You attempt to open the doors, but they are sealed shut. You look back towards the lever, but it is already too late. ";
            cout << "The walls crush you. ";
            cout << "YOU HAVE DIED.";
        }

    }
    else if (playerAnswer == "right" || playerAnswer == "RIGHT" || playerAnswer == "Right")
    {
        system("cls");
        cout << "You enter the room to the right. Suddenly, a door shuts behind you. There is nothing in the room except for another shut door opposite of you and two levers, one blue and the other red. Upon a closer look, you see a riddle enscribed on the door. ";
        cout << "The riddle reads 'The key to unlock that which is sealed is found in the site of emergence.' ";
        cout << "Sight of emergence? Could that mean the entryway? You remember the entrance had colored vases. Perhaps they match one of the colored levers? But what color were the vases? ";
        cout << "Since you are trapped in the room, there is no going back. You must rely on you memories. Do you pull the BLUE lever or the RED lever? ";
        getline(cin, playerAnswer);
        cin.ignore(100, '\n');

        if (playerAnswer == "blue" || playerAnswer == "BLUE" || playerAnswer == "Blue")
        {
            system("cls");
            system("color C0");
            cout << "You pull the blue lever. The door doesn't open. Instead, a spear appears seemingly out of nowhere and impales you. You look down and all you see in your final moments is red. ";
            cout << "YOU HAVE DIED.";
        }
        else if (playerAnswer == "red" || playerAnswer == "RED" || playerAnswer == "Red")
        {
            system("cls");
            cout << "You pull the red lever and thankfully, the door opens. ";
            cout << "You enter the next room. After a few steps, you hear a 'THWIP' sound. You have an inkling of what it is based on your previous exploits. ";
            cout << "You must react quickly. Do you LOOK around or DUCK? ";
            getline(cin, playerAnswer);
            cin.ignore(100, '\n');

            if (playerAnswer == "look" || playerAnswer == "LOOK" || playerAnswer == "Look")
            {
                system("cls");
                system("color C0");
                cout << "You look around the room to find the source of the sound. Unfortunately, it finds you first. You get hit by a poison dart. ";
                cout << "The poison is powerful and you succumb to it quickly. ";
                cout << "YOU HAVE DIED.";
            }
            else if (playerAnswer == "duck" || playerAnswer == "DUCK" || playerAnswer == "Duck")
            {
                system("cls");
                cout << "You quickly duck. A poison dart flies over your head. That was close. You crawl across the floor into the next room. ";
                cout << "In the next room, you see a sarcophagus. This wasn't your goal, but it piques your interest. Will you OPEN the sarcophagus or CONTINUE on? ";
                getline(cin, playerAnswer);
                cin.ignore(100, '\n');

                if (playerAnswer == "open" || playerAnswer == "OPEN" || playerAnswer == "Open")
                {
                    system("cls");
                    system("color C0");
                    cout << "You open the sarcophagus. Suddenly, a sword wielding mummy leaps out. You get sliced! ";
                    cout << "YOU HAVE DIED.";
                }
                else if (playerAnswer == "continue" || playerAnswer == "CONTINUE" || playerAnswer == "Continue")
                {
                    cout << "You continue into the next room. Maybe it was a good choice to ignore the sarcophagus. You must focus on the tablet. ";
                    cout << "You enter a dim corridor. As you exit the corridor, you find yourself in a large chamber. Dust is scattered throughout the air and unlit torches line the walls. A pedastal stands in the middle with a ray of light shining upon it through a crack in the ceiling. ";
                    cout << "On the pedastal you see... the Tablet of Spellbinding! ";
                    cout << "You slowly approach the tablet and reach for it. You hold it in your arms and examine it. It has an iridescent glow.";
                    cout << "Unfortunately, you aren't able to admire the treasure for very long. The torches along the walls suddenly ignite and the ground begins to shake! It's time to get out of here! ";
                    cout << "PRESS ENTER. ";
                    getline(cin, playerAnswer);
                    cin.ignore(100, '\n');
                    cout << "You run back the way you came, but part of the ceiling collapses and blocks your way. You hastily look around. Your eyes are drawn to the hole at the top of the ceiling, but you also spot a crack in the wall. ";
                    cout << "It's time to think fast! Do you KICK the wall or CLIMB to the ceiling? ";
                    getline(cin, playerAnswer);
                    cin.ignore(100, '\n');

                    if (playerAnswer == "kick" || playerAnswer == "KICK" || playerAnswer == "Kick")
                    {
                        system("cls");
                        system("color A0");
                        cout << "You kick the wall and it gives way, leaving a larger gap that is just big enough to squeeze through. ";
                        cout << "Congratulations! You have successfully obtained the Tablet of Spellbinding! ";

                    }
                    else if (playerAnswer == "climb" || playerAnswer == "CLIMB" || playerAnswer == "Climb")
                    {
                        system("cls");
                        cout << "You reach into your knapsack and take out a grappling hook with a rope attached. You throw the grappling hook towards the hole in the ceiling and it catches on. ";
                        cout << "You can't climb the rope with the tablet in your hands. Will you put it in your KNAPSACK or LEAVE IT behind? ";
                        getline(cin, playerAnswer);
                        cin.ignore(100, '\n');

                        if (playerAnswer == "knapsack" || playerAnswer == "KNAPSACK" || playerAnswer == "Knapsack")
                        {
                            system("cls");
                            system("color A0");
                            cout << "You manage to squeeze the tablet into you knapsack. It barely fits. You quickly climb the rope as the tomb crumbles around you. ";
                            cout << "Thankfully you, reach the top and manage to escape with the tablet. Congratulations! ";
                        }
                        else if (playerAnswer == "leave it" || playerAnswer == "LEAVE IT" || playerAnswer == "Leave it" || playerAnswer == "leave It" || playerAnswer == "Leave It")
                        {
                            system("cls");
                            system("color E0");
                            cout << "You manage to escape the tomb, however you were unsuccessful in your endeavor to obtain the Tablet of Spellbinding.";
                        }

                    }
                }
            }
        }
    }

    return 0;
}