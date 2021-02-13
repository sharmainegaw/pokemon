/*  
	Programmed by:    Sharmaine Gaw S14
	Description:      This program simulates a Pokemon battle.
	Last modified:    <date when last revision was made>
	Acknowledgements: <list of sites or borrowed libraries and sources>
#1	ASCII code for the "Pokemon" logo						http://ascii.co.uk/art/pokemon
#2	Opening dialogue										https://bulbapedia.bulbagarden.net/wiki/Professor_Oak
#3	ASCII art for text ("Choose 3 Pokemon")					http://patorjk.com/software/taag/
#4	ASCII art for all Pokemon								https://www.fiikus.net/?pokedex
#4	code for clearing the screen							https://mathbits.com/MathBits/CompSci/Screen/clear.htm
#5	string comparison										https://stackoverflow.com/questions/4014827/best-way-to-switch-on-a-string-in-c
															https://www.techonthenet.com/c_language/standard_library_functions/string_h/strcmp.php
#6	"assigning" strings (strcopy)							https://stackoverflow.com/questions/46865386/assigning-a-value-to-a-char-array-string-in-c
*/
	
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*	This function displays the HP bars of the Pokemon in-battle
	@param	(int)	PokemonInt is the corresponding integer of each Pokemon
	@param	(int)	HP is the health of the displayed Pokemon
	@return	(void)	no return value
*/
void displayHPbar(int PokemonInt, int HP){
	int Health;
	switch(PokemonInt){
		case 1: Health = (HP/160.00) * 100; break;
		case 2: Health = (HP/140.00) * 100; break;
		case 3: Health = (HP/150.00) * 100; break;
		case 4: Health = (HP/125.00) * 100; break;
		case 5: Health = (HP/130.00) * 100; break;
		case 6: Health = (HP/140.00) * 100; break;
		case 7: Health = (HP/180.00) * 100; break;
		case 8: Health = (HP/170.00) * 100; break;
		case 9: Health = (HP/150.00) * 100; break;
	}
	if (Health >= 100) 							printf("ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒ             บ");
	else if (Health >= 90 && Health < 100) 		printf("ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฑ             บ");
	else if (Health >= 80 && Health < 90) 		printf("ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฑฑฑ             บ");
	else if (Health >= 70 && Health < 80) 		printf("ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฑฑฑฑฑ             บ");
	else if (Health >= 60 && Health < 70) 		printf("ฒฒฒฒฒฒฒฒฒฒฒฒฒฑฑฑฑฑฑฑ             บ");
	else if (Health >= 50 && Health < 60) 		printf("ฒฒฒฒฒฒฒฒฒฒฒฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health >= 40 && Health < 50) 		printf("ฒฒฒฒฒฒฒฒฒฑฑฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health >= 30 && Health < 40) 		printf("ฒฒฒฒฒฒฒฑฑฑฑฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health >= 20 && Health < 30) 		printf("ฒฒฒฒฒฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health >= 10 && Health < 20) 		printf("ฒฒฒฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health > 0 && Health < 10) 		printf("ฒฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑ             บ");
	else if (Health == 0 || Health < 0)			printf("ฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑฑ             บ");
}

/*	This function displays the Pokemon Bulbasaur when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayBulbasaur(){
	printf("                                                     /\n");
	printf("                                  _,.------....___,.' ',.-.\n");
	printf("                               ,-'          _,.--\"        |\n");
	printf("                             ,'         _.-'              .\n");
	printf("                            /   ,     ,'                   `\n");
	printf("                           .   /     /                     ``.\n");
	printf("                           |  |     .                       \\.\\\n");
	printf("                 ____      |___._.  |       __               \\ `.\n");
	printf("               .'    `---\"\"       ``\"-.--\"'`  \\               .\n");
	printf("              .  ,            __               `              |   .\n");
	printf("              `,'         ,-\"'  .               \\             |    L\n");
	printf("             ,'          '    _.'                -._          /    |\n");
	printf("            ,`-.    ,\".   `--'                      >.      ,'     |\n");
	printf("           . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
	printf("           ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
	printf("           j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
	printf("          / L:_  |                 .  \"' :_;                `.'.'\n");
	printf("          .    \"\"'                  \"\"\"\"\"'                    V\n");
	printf("           `.                                 .    `.   _,..  `\n");
	printf("             `,_   .    .                _,-'/    .. `,'   __  `\n");
	printf("              ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
	printf("             /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
	printf("            .   _  `\"\"'--.._____..--\"   ,             '         |\n");
	printf("            | .\" `. `-.                /-.           /          ,\n");
	printf("            | `._.'    `,_            ;  /         ,'          .\n");
	printf("           .'          /| `-.        . ,'         ,           ,\n");
	printf("           '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
	printf("           `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"`.,^.`.--'\n");
}

/*	This function displays the Pokemon Bellsprout when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayBellsprout(){
	printf("                          _.--''--._\n");
	printf("                        .'           `.\n");
	printf("                       /               .\n");
	printf("                      j                 .\n");
	printf("                      |                 |\n");
	printf("                      | (')             j\n");
	printf("                      `                 ,`.\n");
	printf("                       \\               ,^. `.\n");
	printf("                        .            /   \\  .\n");
	printf("                        |           /     . |\n");
	printf("                        |          ,'     | |\n");
	printf("                       ,'---..___ /       | |\n");
	printf("                      ' `--..___ '`.     .  |\n");
	printf("                       `'--....___.'    /  j__..._\n");
	printf("                                       /   |      `.\n");
	printf("                                      / _,----._    `.\n");
	printf("                                     /,+_       `.    `.\n");
	printf("                                   ,'  `-.        \\    .\n");
	printf("                                  .       `.       \\    \\\n");
	printf("                                  |         `.     |     \\\n");
	printf("                                  |           `.   |_,._ .\n");
	printf("                                  |\\            \\  |    `.|\n");
	printf("                                  | `.,------._  \\ |       `\n");
	printf("                                  |  |           `. \\|\n");
	printf("                                  |  |             `.|\n");
	printf("                                  |. '\n");
	printf("                                 .' \\ `.\n");
	printf("                              _,' ,' `. ._\n");
	printf("             ---====+,______,.'.-'     .  `.\n");
	printf("             _,..==`'_.+'-''''        / ^.\\`:._\n");
	printf("           ,='/    ,'            ..=+ /  `\\  `:.\n");
	printf("          '  /    /                _+:-'    .|   ``.\n");
}

/*	This function displays the Pokemon Oddish when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayOddish(){
	printf("          	                      .-'--.__\n");
	printf("                    _                / '+--'\n");
	printf("                     \\.-._          j / |\n");
	printf("                      \\`-.`._      . j  |\n");
	printf("                       \\  `. `.    | |  L                   _,,--+='\n");
	printf("                        L   `. `-.|  |   \\            _.-+'    /\n");
	printf("                         \\      `j   |    \\      .'   ,'     /\n");
	printf("                          `.     |   |      \\   ,'   ,'     /\n");
	printf("                            \\    |   |       \\ /    /     /\n");
	printf("            _,-''\"\"\"\"'\"\"'\"\"`--. j    |        V   /      _,+........._\n");
	printf("          -=`...-----...__     `|    |        .   /   _.-'        _,.-,..=.\n");
	printf("                  `-.     `._   |    |         L,'  ,'     _,.-'  ,-'\n");
	printf("                      `.     `. |    |        |  .'   _.-'    ,'\n");
	printf("                          `-._    \\   `      ,','          ,'\n");
	printf("                              `-.. `   \\    /,'       _.-'\n");
	printf("                                ,'\"-..  .  /_,..-\"`\n");
	printf("                               j  .-.     ,.       .\n");
	printf("                              .    -'     `.'       |\n");
	printf("                              |      .--.           |\n");
	printf("                              |      `._|           |\n");
	printf("                              `                     '\n");
	printf("                               `.                 ,'\n");
	printf("                              _.-`   ,..___.. . `-\n");
	printf("                            ,'       |        |    `.\n");
	printf("                          ,'        '          '      `.\n");
	printf("                         /      ,'               .       .\n");
	printf("                          `---'                    `-....'\n");
}

/*	This function displays the Pokemon Charmander when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayCharmander(){
	printf("                        _.--\"\"`-..\n");
	printf("                    ,'        __  `.\n");
	printf("                   /|        \" __   \\\n");
	printf("                  , |         / |.   .\n");
	printf("                  |,'        !_.'|   |\n");
	printf("                ,'           '   |   |\n");
	printf("               /            |`--'|   |\n");
	printf("              |              `---'   |\n");
	printf("               .   ,                 |                       ,\".\n");
	printf("                ._     '         _'  |                    , ' \\ `\n");
	printf("            `.. `.`-...__,..---\"\"    |       __,.        ,`\"   L,|\n");
	printf("            |, `- .`._      _,-,.'  .  __.-'-. /        .   ,    \\\n");
	printf("          -:..     `. `-..--_.,.<       `\"   / `.        `-/ |   .\n");
	printf("            `,         \"\"\"\"'   `.             ,'         |   |  ',,\n");
	printf("              `.      '          '           /          '    |'. |/\n");
	printf("                `.   |             \\      _,-'           |       ''\n");
	printf("                  `._'              \\  '\"\\                .      |\n");
	printf("                     |              '     \\                `._  ,'\n");
	printf("                     |               '     \\                 .'|\n");
	printf("                     |               .      \\                | |\n");
	printf("                     |                 |       L            ,' |\n");
	printf("                      \\                |       |           ,'  /\n");
	printf("                    ,' \\               |  _.._ ,-..___,..-'   ,'\n");
	printf("                   /     .             .      `!             ,j'\n");
	printf("                  /       `.          /        .           .'/\n");
	printf("                 .          `.       /         |        _.'.'\n");
	printf("                  `.          7`'---'          |------\"'_.'\n");
	printf("                 _,.`,_     _'                ,''-----\"'\n");
	printf("             _,-_    '       `.     .'      ,\\\n");
	printf("             -\" /`.         _,'     | _  _  _.|\n");
	printf("              \"\"--'---\"\"\"\"\"'        `' '! |! /\n");
	printf("                                      `\" \" -'\n");
}

/*	This function displays the Pokemon Ninetales when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayNinetales(){
	printf("                  ,-\"\"'-.._\n");
	printf("             .---'\"\" \">` - `--\n");
	printf("             `.      `-._  .`-.\n");
	printf("               `-.       \\ .` : -.\n");
	printf("                _.>._     / ` `:..,\n");
	printf("           ,.../...._`\"-./    '.|, `\n");
	printf("          `---.._\"'-.`-._    |    \"'--.\n");
	printf("                 `--.\\`. `._,'         `.---------------.._\n");
	printf("                      \"-'--.___          \\`'\"-..__         `-._\n");
	printf("                               `.\"`-\\     ` `\"--..\"`-.-..__    `\".\n");
	printf("                                 `.  `.     |``._ `--. `-..`\"-._`.\\-.\n");
	printf("                                   \\   -....' `-.`-.  `-._ `-.  `-.\\ `.\n");
	printf("                                    `-.__  `.`-. `. `._   `._ `-.  `.  `.\n");
	printf("                                         `-..`` `. `.  `.    `.  `-.     \\\n");
	printf("                                             \\`.` `  `.  `.    `.   `-.   `.\n");
	printf("                                              `.`-'`.  \\   .     `.    `.   \\\n");
	printf("                                                `..  \\  \\   \\      `.    `.,_`.\n");
	printf("                                                   \\` \\  .   `.     '\\     `.`.`._\n");
	printf("                                                    \\``.  \\    \\     \\`.    |\n");
	printf("                                                     ' '.  \\    \\     \\ \\   L\n");
	printf("                                                       \\ \\  '    `    '. `.  \\\n");
	printf("                                                        ` `. \\    `    '.  `. `.\n");
	printf("                                                         `. `,`.   `.   `.   `._.\n");
	printf("                                                           `-  \\._   `.  `.     \"`\n");
	printf("                                                                ` `.   `.  .\n");
	printf("                                                                    `-. ``-.:-.\n");
	printf("                                                                        -.`. '\"-'\n");
	printf("                                                                           `\"-. \n");
}

/*	This function displays the Pokemon Ponyta when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayPonyta(){
	printf("                              .' .\n");
	printf("                             .| '\\\n");
	printf("                     _...___/`'   .\n");
	printf("               ,|,\"             )/|                             , .\n");
	printf("              / |              / , .                            \\` \\\n");
	printf("             /            ...-'  ',                              .  \\\n");
	printf("            .           ,>      .                                |   |\n");
	printf("          ..|          |.-\"', /                  ,' | /       .\"'   '.\n");
	printf("          \\ '          |  ,'//                   .'  \"    __,._'    |\n");
	printf("           \\ `         /.\"_/'_,                 '.       /         _'\n");
	printf("            `.\\     _,'   \\.`  ) ,^.              `     '       ,-\"\n");
	printf("              |.  .'  _   | `. '-  `,            , \\     `.    ,-\n");
	printf("              | `w  ,\" |  |   \\   .'   _,_ :\"'. / 7 . ,`..'   .'\n");
	printf("              '|    `.'  /     \\   `-'\"   `   _:_,. |  :  _. ,'\n");
	printf("               \\       .'       `-.      _,.-\"       `-+-`  '\n");
	printf("               |       |           ``--\"'               `.\n");
	printf("               \\   .- .                                   \\\n");
	printf("                `.._,\":                                    \\\n");
	printf("                      '                                    `.  '-7\n");
	printf("                      \\                                  .'`-\"  :\n");
	printf("                       \\                        .        `      `-'\n");
	printf("                       j \\                       `.        `.     |\n");
	printf("                       | `.  |      .^,'.       ,.+        :    _'\n");
	printf("                       |  |`.|     |    \\,  ,-'  :`.       \\  /_.,\n");
	printf("                      /   |  |    /     .,-'.     `.`.      \\   /\n");
	printf("                     /   .' j    / _._,\"     `      ':`.     . (\n");
	printf("                    /   /,-\"|   j  `.         `-.    |  .    |/\n");
	printf("                    .   `'  |   |    7          |   |   |   |\n");
	printf("                     `.  .  |   |  v'           |  .'   |   |\n");
	printf("                        \\   |   |              j   |   j   |\n");
	printf("                          `.j   /\\             |_,j    |  j\n");
	printf("                            /  /`\"           ,\"   |    '  |\n");
	printf("                           /  j              '_,.-'   /.-'|\n");
	printf("                          |  |                       /__.-'\n");
	printf("                         .'`-.'\n");
	printf("                        /    |\n");
	printf("                        `----'\n");
}

/*	This function displays the Pokemon Squirtle when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displaySquirtle(){
	printf("                        _,........__\n");
	printf("                    ,-'            \"`-.\n");
	printf("                  ,'                     \\\n");
	printf("                ,'                        .\n");
	printf("                .'\\             ,\"\".       `\n");
	printf("               ._.'|           / |  `       \\\n");
	printf("               |   |          `-.'  ||       `.\n");
	printf("               |   |          '-._,'||       | \\\n");
	printf("               .`.,'           `..,'.'       , |`-.\n");
	printf("               l                     .'`.  _/  |   `.\n");
	printf("               `-.._'-   ,          _ _'   -\" \\  .     `\n");
	printf("          `.\"\"\"\"\"'-.`-...,-------','         `. `....__.\n");
	printf("          .'        `\"-..___    __,'\\          \\  \\      \\\n");
	printf("          \\_ .          |   `\"\"'    `.           . \\      \\\n");
	printf("            `.          |              `.          |  .     L\n");
	printf("              `.        |`--...________.'.        j   |     |\n");
	printf("                `._    .'      |          `.     .|   ,     |\n");
	printf("                   `--,\\       .            `7\"\"' |  ,      |\n");
	printf("                      ` `      `            /     |  |      |    _,-'\"\"`-.\n");
	printf("                       \\ `.     .          /      |  '      |  ,'         `.\n");
	printf("                        \\  v.__  .        '       .   \\    /| /             \\\n");
	printf("                         \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''               |\n");
	printf("                          `        .        `._ ___,j.  `/ .-      ,---.     |\n");
	printf("                          ,`-.      \\         .\"     `.  |/       j     `    |\n");
	printf("                         /    .     \\       /         \\ /        |     /    j\n");
	printf("                        |      `-.   7-.._ .          |\"          '         /\n");
	printf("                        |        `./_    `|          |           .     _,'\n");
	printf("                        `.          / `----|         |-...........`---'\n");
	printf("                          \\         \\      |         |\n");
	printf("                         ,'          )     `.        |\n");
	printf("                          7___,,..--'      \\/         |\n");
	printf("                                            `-.__,--.'\n");
}

/*	This function displays the Pokemon Psyduck when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displayPsyduck(){
	printf("                                        ,-'   ,\"\",\n");
	printf("                                       / / ,-'.-'\n");
	printf("                             _,..-----+-\".\".-'_,..\n");
	printf("                     ,...,.\"'             `--.---'\n");
	printf("                   /,..,'                    `.\n");
	printf("                 ,'  .'                        `.\n");
	printf("                j   /                            `.\n");
	printf("                |  /,----._          ,.----.       .\n");
	printf("               ,  j    _   \\       .'  .,   `.     |\n");
	printf("             ,'   |        |  ____ |         | .\"--+,^.\n");
	printf("            /     |`-....-',-'   `._`--....-' _/      |\n");
	printf("           /      |     _,'         `--..__  `        '\n");
	printf("          j       | ,-\"'    `   .'         `. `        `.\n");
	printf("          |        .\\                       /  |        \\\n");
	printf("          |         `\\                    ,'   |         \\\n");
	printf("          |          |                    |   ,-|         `.\n");
	printf("          .         ,'                    |-\"'  |           \\\n");
	printf("           \\       /                      `.    |            .\n");
	printf("            ` /  ,'                       |     `             |\n");
	printf("             /  /                         |      \\            |\n");
	printf("            /  |                          |       \\           /\n");
	printf("           /   |                          |        `.       _,\n");
	printf("          .     .                        .'          `.__,.',.----,\n");
	printf("          |      `.                    ,'              .-\"\"      /\n");
	printf("          |        `---............,--\"                |        /\n");
	printf("          |                                            |      ,'\n");
	printf("          '                                            '   ,'\n");
	printf("           \\                                          / ,'\n");
	printf("            `.                                   ,+'\n");
	printf("              >.                               ,'\n");
	printf("            .-'  `-.._                      _,-'-._\n");
	printf("          ,__         `\",-...........,.---\"       `.\n");
	printf("             \\..---. _,-'            ,'             `.\n");
	printf("                    \"                '..,-.__,-\"\"\"---'\n");
}

/*	This function displays the Pokemon Seel when the user is choosing a Pokemon
	@return	(void)	no return value
*/
void displaySeel(){
	printf("                                           /\\\n");
	printf("                                          /  \\\n");
	printf("                                         /    \\\n");
	printf("                                   _,.-\"/      '--._\n");
	printf("                                 ,'      `.  '      `.\n");
	printf("                               ,' _..          _      `.\n");
	printf("                              ,   _  `       ,' `.      \\\n");
	printf("                             .  .\".`          ...        \\\n");
	printf("                             |  |`' |       .(_) |        .\n");
	printf("                             |  `../        `.__.'        |\n");
	printf("                            ,'-\"'--._,...  ______         |\n");
	printf("                           .  .      \\_,'\"'      `-.      '-_\n");
	printf("                           | | \\               ,'|  \\    /    '-\n");
	printf("                           '.|  \\ .---,-._    /  |   | .'        \"\"-_         _--\"\"\"-_\n");
	printf("                             |  .:   j    `-.j   |  /.'              '\\      \"        \"\n");
	printf("                              `-''   '     ,'|   | ,'                  '   /          \"_\n");
	printf("                               /   `-......'--...`-'                     \\'          '  '\n");
	printf("                              |                                           |       ' \"    \"\n");
	printf("                             /                                 _          |     \"       .\"\n");
	printf("                  __.....--\"'|                                  `'..__,...----._      ,'\"\n");
	printf("                ,'_          |                                                  `  .     '\n");
	printf("              /_.             \\                           __                \"\"`-.\\      .'\n");
	printf("            ,'             .-' \\                            `.           .       |__---'\n");
	printf("           `|          _,.'     '-_                           `.          \\      |\n");
	printf("            `.     _.-'            '-                        __--\\          .    ,\n");
	printf("              `'\"\"'                   \"\"\"''---______----''\"\"\"     `-._      |_,.'\n");
	printf("                                                                      `\"---\"'\n");
}

/*	This function displays the rival Pokemon Oddish and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalBulbasaur(int PokemonInt, int HP){
	printf("                                                                                                   /\n");
	printf("                                                                                _,.------....___,.' ',.-.\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                               ,-'          _,.--\"        |\n");
	printf("       บ BULBASAUR                           บ                             ,'         _.-'              .\n");
	printf("       บ                                     บ                            /   ,     ,'                   `\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ       ");
	printf("                    .   /     /                     ``.\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP); printf("                           |  |     .                       \\.\\\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                 ____      |___._.  |       __               \\ `.\n");
	printf("                                                             .'    `---\"\"       ``\"-.--\"'`  \\               .\n");
	printf("                                                            .  ,            __               `              |   .\n");
	printf("                                                            `,'         ,-\"'  .               \\             |    L\n");
	printf("                                                           ,'          '    _.'                -._          /    |\n");
	printf("                                                          ,`-.    ,\".   `--'                      >.      ,'     |\n");
	printf("                                                         . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
	printf("                                                         ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
	printf("                                                         j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
	printf("                                                        / L:_  |                 .  \"' :_;                `.'.'\n");
	printf("                                                        .    \"\"'                  \"\"\"\"\"'                    V\n");
	printf("                                                         `.                                 .    `.   _,..  `\n");
	printf("                                                           `,_   .    .                _,-'/    .. `,'   __  `\n");
	printf("                                                            ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
	printf("                                                           /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
	printf("                                                          .   _  `\"\"'--.._____..--\"   ,             '         |\n");
}

/*	This function displays the rival Pokemon Bellsprout and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalBellsprout(int PokemonInt, int HP){
	printf("                                                                        _.--''--._\n");
	printf("                                                                      .'           `.\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                       /               .\n");
	printf("       บ BELLSPROUT                          บ                      j                 .\n");
	printf("       บ                                     บ                      |                 |\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("                      | (')             j\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("                      `                 ,`.\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                       \\               ,^. `.\n");
	printf("                                                                      .            /   \\  .\n");
	printf("                                                                      |           /     . |\n");
	printf("                                                                      |          ,'     | |\n");
	printf("                                                                     ,'---..___ /       | |\n");
	printf("                                                                    ' `--..___ '`.     .  |\n");
	printf("                                                                     `'--....___.'    /  j__..._\n");
	printf("                                                                                     /   |      `.\n");
	printf("                                                                                    / _,----._    `.\n");
	printf("                                                                                   /,+_       `.    `.\n");
	printf("                                                                                 ,'  `-.        \\    .\n");
	printf("                                                                                .       `.       \\    \\\n");
	printf("                                                                                |         `.     |     \\\n");
	printf("                                                                                |           `.   |_,._ .\n");
	printf("                                                                                |\\            \\  |    `.|\n");
}

/*	This function displays the rival Pokemon Bellsprout and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalOddish(int PokemonInt, int HP){
	printf("                                                        	                      .-'--.__\n");
	printf("                                                                  _                / '+--'\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                     \\.-._          j / |\n");
	printf("       บ ODDISH                              บ                      \\`-.`._      . j  |\n");
	printf("       บ                                     บ                       \\  `. `.    | |  L                   _,,--+='\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("                        L   `. `-.|  |   \\            _.-+'    /\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("                         \\      `j   |    \\      .'   ,'     /\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                          `.     |   |      \\   ,'   ,'     /\n");
	printf("                                                                          \\    |   |       \\ /    /     /\n");
	printf("                                                          _,-''\"\"\"\"'\"\"'\"\"`--. j    |        V   /      _,+........._\n");
	printf("                                                        -=`...-----...__     `|    |        .   /   _.-'        _,.-,..=.\n");
	printf("                                                                `-.     `._   |    |         L,'  ,'     _,.-'  ,-'\n");
	printf("                                                                    `.     `. |    |        |  .'   _.-'    ,'\n");
	printf("                                                                        `-._    \\   `      ,','          ,'\n");
	printf("                                                                            `-.. `   \\    /,'       _.-'\n");
	printf("                                                                              ,'\"-..  .  /_,..-\"`\n");
	printf("                                                                             j  .-.     ,.       .\n");
	printf("                                                                            .    -'     `.'       |\n");
	printf("                                                                            |      .--.           |\n");
	printf("                                                                            |      `._|           |\n");
	printf("                                                                            `                     '\n");
	printf("                                                                             `.                 ,'\n");
}

/*	This function displays the rival Pokemon Charmander and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalCharmander(int PokemonInt, int HP){
	printf("                                                                      _.--\"\"`-..\n");
	printf("                                                                  ,'        __  `.\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                   /|        \" __   \\\n");
	printf("       บ CHARMANDER                          บ                  , |         / |.   .\n");
	printf("       บ                                     บ                  |,'        !_.'|   |\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("                ,'           '   |   |\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("               /            |`--'|   |\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ              |              `---'   |\n");
	printf("                                                             .   ,                 |                       ,\".\n");
	printf("                                                              ._     '         _'  |                    , ' \\ `\n");
	printf("                                                          `.. `.`-...__,..---\"\"    |       __,.        ,`\"   L,|\n");
	printf("                                                          |, `- .`._      _,-,.'  .  __.-'-. /        .   ,    \\\n");
	printf("                                                        -:..     `. `-..--_.,.<       `\"   / `.        `-/ |   .\n");
	printf("                                                          `,         \"\"\"\"'   `.             ,'         |   |  ',,\n");
	printf("                                                            `.      '          '           /          '    |'. |/\n");
	printf("                                                              `.   |             \\      _,-'           |       ''\n");
	printf("                                                                `._'              \\  '\"\\                .      |\n");
	printf("                                                                   |              '     \\                `._  ,'\n");
	printf("                                                                   |               '     \\                 .'|\n");
	printf("                                                                   |               .      \\                | |\n");
	printf("                                                                   |                 |       L            ,' |\n");
	printf("                                                                    \\                |       |           ,'  /\n");
}

/*	This function displays the rival Pokemon Ninetales and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalNinetales(int PokemonInt, int HP){
	printf("                                                                ,-\"\"'-.._\n");
	printf("                                                           .---'\"\" \">` - `--\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป             `.      `-._  .`-.\n");
	printf("       บ NINETALES                           บ               `-.       \\ .` : -.\n");
	printf("       บ                                     บ                _.>._     / ` `:..,\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("           ,.../...._`\"-./    '.|, `\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("          `---.._\"'-.`-._    |    \"'--.\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                 `--.\\`. `._,'         `.---------------.._\n");
	printf("                                                                    \"-'--.___          \\`'\"-..__         `-._\n");
	printf("                                                                             `.\"`-\\     ` `\"--..\"`-.-..__    `\".\n");
	printf("                                                                               `.  `.     |``._ `--. `-..`\"-._`.\\-.\n");
	printf("                                                                                 \\   -....' `-.`-.  `-._ `-.  `-.\\ `.\n");
	printf("                                                                                  `-.__  `.`-. `. `._   `._ `-.  `.  `.\n");
	printf("                                                                                       `-..`` `. `.  `.    `.  `-.     \\\n");
	printf("                                                                                           \\`.` `  `.  `.    `.   `-.   `.\n");
	printf("                                                                                            `.`-'`.  \\   .     `.    `.   \\\n");
	printf("                                                                                              `..  \\  \\   \\      `.    `.,_`.\n");
	printf("                                                                                                 \\` \\  .   `.     '\\     `.`.`._\n");
	printf("                                                                                                  \\``.  \\    \\     \\`.    |\n");
	printf("                                                                                                   ' '.  \\    \\     \\ \\   L\n");
	printf("                                                                                                     \\ \\  '    `    '. `.  \\\n");
	printf("                                                                                                      ` `. \\    `    '.  `. `.\n");
}

/*	This function displays the rival Pokemon Ponyta and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalPonyta(int PokemonInt, int HP){
	printf("                                                                            .' .\n");
	printf("                                                                           .| '\\\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                     _...___/`'   .\n");
	printf("       บ PONYTA                              บ               ,|,\"             )/|                             , .\n");
	printf("       บ                                     บ              / |              / , .                            \\` \\\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("             /            ...-'  ',                              .  \\\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("            .           ,>      .                                |   |\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ          ..|          |.-\"', /                  ,' | /       .\"'   '.\n");
	printf("                                                        \\ '          |  ,'//                   .'  \"    __,._'    |\n");
	printf("                                                         \\ `         /.\"_/'_,                 '.       /         _'\n");
	printf("                                                          `.\\     _,'   \\.`  ) ,^.              `     '       ,-\"\n");
	printf("                                                            |.  .'  _   | `. '-  `,            , \\     `.    ,-\n");
	printf("                                                            | `w  ,\" |  |   \\   .'   _,_ :\"'. / 7 . ,`..'   .'\n");
	printf("                                                            '|    `.'  /     \\   `-'\"   `   _:_,. |  :  _. ,'\n");
	printf("                                                             \\       .'       `-.      _,.-\"       `-+-`  '\n");
	printf("                                                             |       |           ``--\"'               `.\n");
	printf("                                                             \\   .- .                                   \\\n");
	printf("                                                              `.._,\":                                    \\\n");
	printf("                                                                    '                                    `.  '-7\n");
	printf("                                                                    \\                                  .'`-\"  :\n");
	printf("                                                                     \\                        .        `      `-'\n");
	printf("                                                                     j \\                       `.        `.     |\n");
}

/*	This function displays the rival Pokemon Squirtle and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalSquirtle(int PokemonInt, int HP){
	printf("                                                                      _,........__\n");
	printf("                                                                  ,-'            \"`-.\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                  ,'                     \\\n");
	printf("       บ SQUIRTLE                            บ                ,'                        .\n");
	printf("       บ                                     บ                .'\\             ,\"\".       `\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("               ._.'|           / |  `       \\\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("               |   |          `-.'  ||       `.\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ               |   |          '-._,'||       | \\\n");
	printf("                                                             .`.,'           `..,'.'       , |`-.\n");
	printf("                                                             l                     .'`.  _/  |   `.\n");
	printf("                                                             `-.._'-   ,          _ _'   -\" \\  .     `\n");
	printf("                                                        `.\"\"\"\"\"'-.`-...,-------','         `. `....__.\n");
	printf("                                                        .'        `\"-..___    __,'\\          \\  \\      \\\n");
	printf("                                                        \\_ .          |   `\"\"'    `.           . \\      \\\n");
	printf("                                                          `.          |              `.          |  .     L\n");
	printf("                                                            `.        |`--...________.'.        j   |     |\n");
	printf("                                                              `._    .'      |          `.     .|   ,     |\n");
	printf("                                                                 `--,\\       .            `7\"\"' |  ,      |\n");
	printf("                                                                    ` `      `            /     |  |      |    _,-'\"\"`-.\n");
	printf("                                                                     \\ `.     .          /      |  '      |  ,'         `.\n");
	printf("                                                                      \\  v.__  .        '       .   \\    /| /             \\\n");
	printf("                                                                       \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''               |\n");
}

/*	This function displays the rival Pokemon Psyduck and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalPsyduck(int PokemonInt, int HP){
	printf("                                                                                      ,-'   ,\"\",\n");
	printf("                                                                                     / / ,-'.-'\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                             _,..-----+-\".\".-'_,..\n");
	printf("       บ PSYDUCK                             บ                     ,...,.\"'             `--.---'\n");
	printf("       บ                                     บ                   /,..,'                    `.\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("                 ,'  .'                        `.\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("                j   /                            `.\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                |  /,----._          ,.----.       .\n");
	printf("                                                             ,  j    _   \\       .'  .,   `.     |\n");
	printf("                                                           ,'   |        |  ____ |         | .\"--+,^.\n");
	printf("                                                          /     |`-....-',-'   `._`--....-' _/      |\n");
	printf("                                                         /      |     _,'         `--..__  `        '\n");
	printf("                                                        j       | ,-\"'    `   .'         `. `        `.\n");
	printf("                                                        |        .\\                       /  |        \\\n");
	printf("                                                        |         `\\                    ,'   |         \\\n");
	printf("                                                        |          |                    |   ,-|         `.\n");
	printf("                                                        .         ,'                    |-\"'  |           \\\n");
	printf("                                                         \\       /                      `.    |            .\n");
	printf("                                                          ` /  ,'                       |     `             |\n");
	printf("                                                           /  /                         |      \\            |\n");
	printf("                                                          /  |                          |       \\           /\n");
	printf("                                                         /   |                          |        `.       _,\n");
}

/*	This function displays the rival Pokemon Seel and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayRivalSeel(int PokemonInt, int HP){
	printf("                                                                                         /\\\n");
	printf("                                                                                        /  \\\n");
	printf("       ษอออออออออออออออออออออออออออออออออออออป                                         /    \\\n");
	printf("       บ SEEL                                บ                                   _,.-\"/      '--._\n");
	printf("       บ                                     บ                                 ,'      `.  '      `.\n");
	printf("       บ HP "); if (HP < 0 || HP == 0) printf("  0");
	else if (HP > 0 && HP < 10) printf("  %d", HP);
	else if (HP >= 10 && HP < 100) printf(" %d", HP);
	else printf("%d", HP);
	printf("                              บ");
	printf("                               ,' _..          _      `.\n");
	printf("       บ    "); displayHPbar(PokemonInt, HP);
	printf("                              ,   _  `       ,' `.      \\\n");
	printf("       ศอออออออออออออออออออออออออออออออออออออผ                             .  .\".`          ...        \\\n");
	printf("                                                                           |  |`' |       .(_) |        .\n");
	printf("                                                                           |  `../        `.__.'        |\n");
	printf("                                                                          ,'-\"'--._,...  ______         |\n");
	printf("                                                                         .  .      \\_,'\"'      `-.      '-_\n");
	printf("                                                                         | | \\               ,'|  \\    /    '-\n");
	printf("                                                                         '.|  \\ .---,-._    /  |   | .'        \"\"-_         _--\"\"\"-_\n");
	printf("                                                                           |  .:   j    `-.j   |  /.'              '\\      \"        \"\n");
	printf("                                                                            `-''   '     ,'|   | ,'                  '   /          \"_\n");
	printf("                                                                             /   `-......'--...`-'                     \\'          '  '\n");
	printf("                                                                            |                                           |       ' \"    \"\n");
	printf("                                                                           /                                 _          |     \"       .\"\n");
	printf("                                                                __.....--\"'|                                  `'..__,...----._      ,'\"\n");
	printf("                                                              ,'_          |                                                  `  .     '\n");
	printf("                                                            /_.             \\                           __                \"\"`-.\\      .'\n");
}

/*	This function displays the user Pokemon Bulbasaur and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserBulbasaur(int PokemonInt, int HP){
	printf("                                                     /\n");
	printf("                                  _,.------....___,.' ',.-.\n");
	printf("                               ,-'          _,.--\"        |\n");
	printf("                             ,'         _.-'              .\n");
	printf("                            /   ,     ,'                   `\n");
	printf("                           .   /     /                     ``.\n");
	printf("                           |  |     .                       \\.\\\n");
	printf("                 ____      |___._.  |       __               \\ `.\n");
	printf("               .'    `---\"\"       ``\"-.--\"'`  \\               .\n");
	printf("              .  ,            __               `              |   .\n");
	printf("              `,'         ,-\"'  .               \\             |    L\n");
	printf("             ,'          '    _.'                -._          /    |\n");
	printf("            ,`-.    ,\".   `--'                      >.      ,'     |\n");
	printf("           . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
	printf("           ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
	printf("           j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
	printf("          / L:_  |                 .  \"' :_;                `.'.'       ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("          .    \"\"'                  \"\"\"\"\"'                    V         บ BULBASAUR                           บ\n");
	printf("           `.                                 .    `.   _,..  `         บ                                     บ\n");
	printf("             `,_   .    .                _,-'/    .. `,'   __  `        บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("              ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .       บ    "); displayHPbar(PokemonInt, HP);
	printf("\n             /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |       ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("            .   _  `\"\"'--.._____..--\"   ,             '         |");
}

/*	This function displays the user Pokemon Bellsprout and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserBellsprout(int PokemonInt, int HP){
	printf("                          _.--''--._\n");
	printf("                        .'           `.\n");
	printf("                       /               .\n");
	printf("                      j                 .\n");
	printf("                      |                 |\n");
	printf("                      | (')             j\n");
	printf("                      `                 ,`.\n");
	printf("                       \\               ,^. `.\n");
	printf("                        .            /   \\  .\n");
	printf("                        |           /     . |\n");
	printf("                        |          ,'     | |\n");
	printf("                       ,'---..___ /       | |\n");
	printf("                      ' `--..___ '`.     .  |\n");
	printf("                       `'--....___.'    /  j__..._\n");
	printf("                                       /   |      `.\n");
	printf("                                      / _,----._    `.                  ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                                     /,+_       `.    `.                บ BELLSPROUT                          บ\n");
	printf("                                   ,'  `-.        \\    .                บ                                     บ\n");
	printf("                                  .       `.       \\    \\               บ HP "); if (HP < 0 || HP == 0) printf("  0");
																							else if (HP > 0 && HP < 10) printf("  %d", HP);
																							else if (HP >= 10 && HP < 100) printf(" %d", HP);
																							else printf("%d", HP);
																							printf("                              บ\n");
	printf("                                  |         `.     |     \\              บ    ");	displayHPbar(PokemonInt, HP);
	printf("\n                                  |           `.   |_,._ .\\             ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                                  |\\            \\  |    `.|");
}

/*	This function displays the user Pokemon Oddish and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserOddish(int PokemonInt, int HP){
	printf("          	                      .-'--.__\n");
	printf("                    _                / '+--'\n");
	printf("                     \\.-._          j / |\n");
	printf("                      \\`-.`._      . j  |\n");
	printf("                       \\  `. `.    | |  L                   _,,--+='\n");
	printf("                        L   `. `-.|  |   \\            _.-+'    /\n");
	printf("                         \\      `j   |    \\      .'   ,'     /\n");
	printf("                          `.     |   |      \\   ,'   ,'     /\n");
	printf("                            \\    |   |       \\ /    /     /\n");
	printf("            _,-''\"\"\"\"'\"\"'\"\"`--. j    |        V   /      _,+........._\n");
	printf("          -=`...-----...__     `|    |        .   /   _.-'        _,.-,..=.\n");
	printf("                  `-.     `._   |    |         L,'  ,'     _,.-'  ,-'\n");
	printf("                      `.     `. |    |        |  .'   _.-'    ,'\n");
	printf("                          `-._    \\   `      ,','          ,'\n");
	printf("                              `-.. `   \\    /,'       _.-'              ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                                ,'\"-..  .  /_,..-\"`                     บ ODDISH                              บ\n");
	printf("                               j  .-.     ,.       .                    บ                                     บ\n");
	printf("                              .    -'     `.'       |                   บ HP "); if (HP < 0 || HP == 0) printf("  0");
																							else if (HP > 0 && HP < 10) printf("  %d", HP);
																							else if (HP >= 10 && HP < 100) printf(" %d", HP);
																							else printf("%d", HP);
																							printf("                              บ\n");
	printf("                              |      .--.           |                   บ    ");	displayHPbar(PokemonInt, HP);
	printf("\n                              |      `._|           |                   ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                              `                     '");
}

/*	This function displays the user Pokemon Charmander and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserCharmander(int PokemonInt, int HP){
	printf("                        _.--\"\"`-..\n");
	printf("                    ,'        __  `.\n");
	printf("                   /|        \" __   \\\n");
	printf("                  , |         / |.   .\n");
	printf("                  |,'        !_.'|   |\n");
	printf("                ,'           '   |   |\n");
	printf("               /            |`--'|   |\n");
	printf("              |              `---'   |\n");
	printf("               .   ,                 |                       ,\".\n");
	printf("                ._     '         _'  |                    , ' \\ `\n");
	printf("            `.. `.`-...__,..---\"\"    |       __,.        ,`\"   L,|\n");
	printf("            |, `- .`._      _,-,.'  .  __.-'-. /        .   ,    \\\n");
	printf("          -:..     `. `-..--_.,.<       `\"   / `.        `-/ |   .\n");
	printf("            `,         \"\"\"\"'   `.             ,'         |   |  ',,\n");
	printf("              `.      '          '           /          '    |'. |/\n");
	printf("                `.   |             \\      _,-'           |       ''       ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                  `._'              \\  '\"\\                .      |        บ CHARMANDER                          บ\n");
	printf("                     |              '     \\                `._  ,'        บ                                     บ\n");
	printf("                     |               '     \\                 .'|          บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("                     |               .      \\                | |          บ    "); displayHPbar(PokemonInt, HP);
	printf("\n                     |                 |       L            ,' |          ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                      \\                |       |           ,'  /");
}

/*	This function displays the user Pokemon Ninetales and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserNinetales(int PokemonInt, int HP){
	printf("                  ,-\"\"'-.._\n");
	printf("             .---'\"\" \">` - `--\n");
	printf("             `.      `-._  .`-.\n");
	printf("               `-.       \\ .` : -.\n");
	printf("                _.>._     / ` `:..,\n");
	printf("           ,.../...._`\"-./    '.|, `\n");
	printf("          `---.._\"'-.`-._    |    \"'--.\n");
	printf("                 `--.\\`. `._,'         `.---------------.._\n");
	printf("                      \"-'--.___          \\`'\"-..__         `-._\n");
	printf("                               `.\"`-\\     ` `\"--..\"`-.-..__    `\".\n");
	printf("                                 `.  `.     |``._ `--. `-..`\"-._`.\\-.\n");
	printf("                                   \\   -....' `-.`-.  `-._ `-.  `-.\\ `.\n");
	printf("                                    `-.__  `.`-. `. `._   `._ `-.  `.  `.\n");
	printf("                                         `-..`` `. `.  `.    `.  `-.     \\\n");
	printf("                                             \\`.` `  `.  `.    `.   `-.   `.        ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                                              `.`-'`.  \\   .     `.    `.   \\       บ NINETALES                           บ\n");
	printf("                                                `..  \\  \\   \\      `.    `.,_`.     บ                                     บ\n");
	printf("                                                   \\` \\  .   `.     '\\     `.`.`._  บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("                                                    \\``.  \\    \\     \\`.    |       บ    "); displayHPbar(PokemonInt, HP);
	printf("\n                                                     ' '.  \\    \\     \\ \\   L       ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                                                       \\ \\  '    `    '. `.  \\");
}

/*	This function displays the user Pokemon Ponyta and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserPonyta(int PokemonInt, int HP){
	printf("                              .' .\n");
	printf("                             .| '\\\n");
	printf("                     _...___/`'   .\n");
	printf("               ,|,\"             )/|                             , .\n");
	printf("              / |              / , .                            \\` \\\n");
	printf("             /            ...-'  ',                              .  \\\n");
	printf("            .           ,>      .                                |   |\n");
	printf("          ..|          |.-\"', /                  ,' | /       .\"'   '.\n");
	printf("          \\ '          |  ,'//                   .'  \"    __,._'    |\n");
	printf("           \\ `         /.\"_/'_,                 '.       /         _'\n");
	printf("            `.\\     _,'   \\.`  ) ,^.              `     '       ,-\"\n");
	printf("              |.  .'  _   | `. '-  `,            , \\     `.    ,-\n");
	printf("              | `w  ,\" |  |   \\   .'   _,_ :\"'. / 7 . ,`..'   .'\n");
	printf("              '|    `.'  /     \\   `-'\"   `   _:_,. |  :  _. ,'\n");
	printf("               \\       .'       `-.      _,.-\"       `-+-`  '\n");
	printf("               |       |           ``--\"'               `.\n");
	printf("               \\   .- .                                   \\           ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                `.._,\":                                    \\          บ PONYTA                              บ\n");
	printf("                      '                                    `.  '-7    บ                                     บ\n");
	printf("                      \\                                  .'`-\"  :     บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("                       \\                        .        `      `-'   บ    "); displayHPbar(PokemonInt, HP);
	printf("\n                       j \\                       `.        `.     |   ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                       | `.  |      .^,'.       ,.+        :    _'");
}

/*	This function displays the user Pokemon Squirtle and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserSquirtle(int PokemonInt, int HP){
	printf("                        _,........__\n");
	printf("                    ,-'            \"`-.\n");
	printf("                  ,'                     \\\n");
	printf("                ,'                        .\n");
	printf("                .'\\             ,\"\".       `\n");
	printf("               ._.'|           / |  `       \\\n");
	printf("               |   |          `-.'  ||       `.\n");
	printf("               |   |          '-._,'||       | \\\n");
	printf("               .`.,'           `..,'.'       , |`-.\n");
	printf("               l                     .'`.  _/  |   `.\n");
	printf("               `-.._'-   ,          _ _'   -\" \\  .     `\n");
	printf("          `.\"\"\"\"\"'-.`-...,-------','         `. `....__.\n");
	printf("          .'        `\"-..___    __,'\\          \\  \\      \\\n");
	printf("          \\_ .          |   `\"\"'    `.           . \\      \\\n");
	printf("            `.          |              `.          |  .     L\n");
	printf("              `.        |`--...________.'.        j   |     |                   ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                `._    .'      |          `.     .|   ,     |                   บ SQUIRTLE                            บ\n");
	printf("                   `--,\\       .            `7\"\"' |  ,      |                   บ                                     บ\n");
	printf("                      ` `      `            /     |  |      |    _,-'\"\"`-.      บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("                       \\ `.     .          /      |  '      |  ,'         `.    บ    "); displayHPbar(PokemonInt, HP);
	printf("\n                        \\  v.__  .        '       .   \\    /| /             \\   ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("                         \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''               |");
}

/*	This function displays the user Pokemon Psyduck and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserPsyduck(int PokemonInt, int HP){
	printf("                                        ,-'   ,\"\",\n");
	printf("                                       / / ,-'.-'\n");
	printf("                             _,..-----+-\".\".-'_,..\n");
	printf("                     ,...,.\"'             `--.---'\n");
	printf("                   /,..,'                    `.\n");
	printf("                 ,'  .'                        `.\n");
	printf("                j   /                            `.\n");
	printf("                |  /,----._          ,.----.       .\n");
	printf("               ,  j    _   \\       .'  .,   `.     |\n");
	printf("             ,'   |        |  ____ |         | .\"--+,^.\n");
	printf("            /     |`-....-',-'   `._`--....-' _/      |\n");
	printf("           /      |     _,'         `--..__  `        '\n");
	printf("          j       | ,-\"'    `   .'         `. `        `.\n");
	printf("          |        .\\                       /  |        \\\n");
	printf("          |         `\\                    ,'   |         \\\n");
	printf("          |          |                    |   ,-|         `.\n");
	printf("          .         ,'                    |-\"'  |           \\       ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("           \\       /                      `.    |            .      บ PSYDUCK                             บ\n");
	printf("            ` /  ,'                       |     `             |     บ                                     บ\n");
	printf("             /  /                         |      \\            |     บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("            /  |                          |       \\           /     บ    "); displayHPbar(PokemonInt, HP);
	printf("\n           /   |                          |        `.       _,      ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("          .     .                        .'          `.__,.',.----,");
}

/*	This function displays the user Pokemon Seel and its stats in-battle
	@param	(int)	PokemonInt is the corresponding integer of the Pokemon
	@param	(int)	HP is the health of the displayed Pokemon 
	@return	(void)	no return value
*/
void displayUserSeel(int PokemonInt, int HP){
	printf("                                           /\\\n");
	printf("                                          /  \\\n");
	printf("                                         /    \\\n");
	printf("                                   _,.-\"/      '--._\n");
	printf("                                 ,'      `.  '      `.\n");
	printf("                               ,' _..          _      `.\n");
	printf("                              ,   _  `       ,' `.      \\\n");
	printf("                             .  .\".`          ...        \\\n");
	printf("                             |  |`' |       .(_) |        .\n");
	printf("                             |  `../        `.__.'        |\n");
	printf("                            ,'-\"'--._,...  ______         |\n");
	printf("                           .  .      \\_,'\"'      `-.      '-_\n");
	printf("                           | | \\               ,'|  \\    /    '-\n");
	printf("                           '.|  \\ .---,-._    /  |   | .'        \"\"-_         _--\"\"\"-_\n");
	printf("                             |  .:   j    `-.j   |  /.'              '\\      \"        \"\n");
	printf("                              `-''   '     ,'|   | ,'                  '   /          \"_       ษอออออออออออออออออออออออออออออออออออออป\n");
	printf("                               /   `-......'--...`-'                     \\'          '  '      บ SEEL                                บ\n");
	printf("                              |                                           |       ' \"    \"     บ                                     บ\n");
	printf("                             /                                 _          |     \"       .\"     บ HP "); if (HP < 0 || HP == 0) printf("  0");
																						else if (HP > 0 && HP < 10) printf("  %d", HP);
																						else if (HP >= 10 && HP < 100) printf(" %d", HP);
																						else printf("%d", HP);
																						printf("                              บ\n");
	printf("                  __.....--\"'|                                  `'..__,...----._      ,'\"      บ    "); displayHPbar(PokemonInt, HP);
	printf("\n                ,'_          |                                                  `  .     '     ศอออออออออออออออออออออออออออออออออออออผ\n");
	printf("              /_.             \\                           __                \"\"`-.\\      .'");
}

/*	This function is the list of functions that display the Pokemon in-battle
	@param	(int)	nComp is the integer of the rival Pokemon
	@param	(int)	nUser is the integer of the user Pokemon
	@param	(int)	rHP is the health of the rival Pokemon
	@param	(int)	HP is the health of the user Pokemon
	@return	(void)	no return value
*/
void displayPokemon(int nComp, int nUser, int rHP, int HP){
	switch(nComp){
		case 1: displayRivalBulbasaur(nComp, rHP); break;
		case 2: displayRivalBellsprout(nComp, rHP); break;
		case 3: displayRivalOddish(nComp, rHP); break;
		case 4: displayRivalCharmander(nComp, rHP); break;
		case 5: displayRivalNinetales(nComp, rHP); break;
		case 6: displayRivalPonyta(nComp, rHP); break;
		case 7: displayRivalSquirtle(nComp, rHP); break;
		case 8: displayRivalPsyduck(nComp, rHP); break;
		case 9: displayRivalSeel(nComp, rHP); break;

	}
	switch(nUser){
		case 1: displayUserBulbasaur(nUser, HP); break;
		case 2: displayUserBellsprout(nUser, HP); break;
		case 3: displayUserOddish(nUser, HP); break;
		case 4: displayUserCharmander(nUser, HP); break;
		case 5: displayUserNinetales(nUser, HP); break;
		case 6: displayUserPonyta(nUser, HP); break;
		case 7: displayUserSquirtle(nUser, HP); break;
		case 8: displayUserPsyduck(nUser, HP); break;
		case 9: displayUserSeel(nUser, HP); break;
	}
	
}

/*	This function displays the Pokemon and its description in the Pokedex
	@param	(int)	nUser1 is the integer of the Pokemon that was chosen by the user
	@return	(void)	no return value
*/
void displayPokedex1(int nUser1){
	switch(nUser1){
		case 1: displayBulbasaur(); break;
		case 2: displayBellsprout(); break;
		case 3: displayOddish(); break;
		case 4: displayCharmander(); break;
		case 5: displayNinetales(); break;
		case 6: displayPonyta(); break;
		case 7: displaySquirtle(); break;
		case 8: displayPsyduck(); break;
		case 9: displaySeel(); break;
	}
	
				printf("\n     ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
				printf("\n     บ                                                                  บ");
	switch(nUser1){
		case 1: printf("\n     บ  >> BULBASAUR (#001)                                             บ");
				printf("\n     บ     Bulbasaur can be seen napping in bright sunlight.            บ");
				printf("\n     บ     There is a seed on its back. By soaking up the sun's         บ");
				printf("\n     บ     rays, the seed grows progressively larger.                   บ"); break;
		case 2: printf("\n     บ  >> BELLSPROUT (#069)                                            บ");
				printf("\n     บ     Bellsprout's thin and flexible body lets it bend and         บ");
				printf("\n     บ     sway to avoid any attack, however strong it may be.          บ");
				printf("\n     บ     From its mouth, this Pok้mon spits a corrosive fluid         บ");
				printf("\n     บ     That melts even iron.                                        บ"); break;
		case 3: printf("\n     บ  >> ODDISH (#043)                                                บ");
				printf("\n     บ     During the daytime, Oddish buries itself in soil to          บ");
				printf("\n     บ     absorb nutrients from the ground using its entire            บ");
				printf("\n     บ     body. The more fertile the soil, the glossier its leaves     บ");
				printf("\n     บ     become.                                                      บ"); break;
		case 4: printf("\n     บ  >> CHARMANDER (#004)                                            บ");
				printf("\n     บ     The flame that burns at the tip of its tail is an            บ");
				printf("\n     บ     indication of its emotions. The flame wavers when            บ");
				printf("\n     บ     Charmander is enjoying itself. If the Pokmon                บ");
				printf("\n     บ     becomes enraged, the flame burns fiercely.                   บ"); break;
		case 5: printf("\n     บ  >> NINETALES (#038)                                             บ");
				printf("\n     บ     Ninetales casts a sinister light from its bright red         บ");
				printf("\n     บ     eyes to gain total control over its foe's mind. This         บ");
				printf("\n     บ     Pokmon is said to live for a thousand years.                บ"); break;
		case 6: printf("\n     บ  >> PONYTA (#077)                                                บ");
				printf("\n     บ     Ponyta is very weak at birth. It can barely stand up.        บ");
				printf("\n     บ     This Pokmon becomes stronger by stumbling and               บ");
				printf("\n     บ     falling to keep up with its parent.                          บ"); break;
		case 7: printf("\n     บ  >> SQUIRTLE (#007)                                              บ");
				printf("\n     บ     Squirtle's shell is not merely used for protection. The      บ");
				printf("\n     บ     shell's rounded shape and the grooves on its surface         บ");
				printf("\n     บ     help minimize resistance in water, enabling this             บ");
				printf("\n     บ     Pok้mon to swim at high speeds.                              บ"); break;
		case 8: printf("\n     บ  >> PSYDUCK (#054)                                               บ");
				printf("\n     บ     Psyduck uses a mysterious power. When it does so,            บ");
				printf("\n     บ     this Pokmon generates brain waves that are                  บ");
				printf("\n     บ     supposedly only seen in sleepers. This discovery             บ");
				printf("\n     บ     spurred controversy among scholars.                          บ"); break;
		case 9: printf("\n     บ  >> SEEL (#086)                                                  บ");
				printf("\n     บ     Seel hunts for prey in the frigid sea underneath             บ");
				printf("\n     บ     sheets of ice. When it needs to breathe, it punches a        บ");
				printf("\n     บ     hole through the ice with the sharply protruding             บ");
				printf("\n     บ     section of its head.                                         บ"); break;
	}
				printf("\n     บ                                                                  บ");
				printf("\n     ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
}

/*	This function displays the dialogue in-battle
	@param	(int)	nDialogue counts which dialogue line is to be displayed
	@param	(int)	PokemonInt is the integer of the Pokemon
	@return	(void)	no return value
*/
void displayBattleDialogue(int nDialogue, int PokemonInt){
	char cPokemon[12];
	
	switch(PokemonInt){
		case 1: strcpy(cPokemon, "BULBASAUR"); break;
		case 2: strcpy(cPokemon, "BELLSPROUT"); break;
		case 3: strcpy(cPokemon, "ODDISH"); break;
		case 4: strcpy(cPokemon, "CHARMANDER"); break;
		case 5: strcpy(cPokemon, "NINETALES"); break;
		case 6: strcpy(cPokemon, "PONYTA"); break;
		case 7: strcpy(cPokemon, "SQUIRTLE"); break;
		case 8: strcpy(cPokemon, "PSYDUCK"); break;
		case 9: strcpy(cPokemon, "SEEL"); break;
	}
	
	switch(nDialogue){
		case 1: printf("\n          บ           >> What will %s do?", cPokemon); 
				printf("\n          บ                                                              (1) Attack");
				printf("\n          บ                                                              (2) Switch Pokmon");
				printf("\n          บ                                                              (3) Use Potion"); break;
		case 2: printf("\n          บ           >> Which attack?");
				printf("\n          บ                                                              (1) Leaf Storm");
				printf("\n          บ                                                              (2) Mega Drain");
				printf("\n          บ                                                              (3) Razor Leaf"); break;
		case 3: printf("\n          บ           >> Which attack?");
				printf("\n          บ                                                              (1) Ember");
				printf("\n          บ                                                              (2) Fire Punch");
				printf("\n          บ                                                              (3) Flame Wheel"); break;
		case 4: printf("\n          บ           >> Which attack?");
				printf("\n          บ                                                              (1) Bubble");
				printf("\n          บ                                                              (2) Hydro Pump");
				printf("\n          บ                                                              (3) Surf"); break;
		case 5: printf("\n          บ           >> %s used LEAF STORM!", cPokemon); break;
		case 6: printf("\n          บ           >> %s used MEGA DRAIN!", cPokemon); break;
		case 7: printf("\n          บ           >> %s used RAZOR LEAF!", cPokemon); break;
		case 8: printf("\n          บ           >> %s used EMBER!", cPokemon); break;
		case 9: printf("\n          บ           >> %s used FIRE PUNCH!", cPokemon); break;
		case 10: printf("\n          บ           >> %s used FLAME WHEEL!", cPokemon); break;
		case 11: printf("\n          บ           >> %s used BUBBLE!", cPokemon); break;
		case 12: printf("\n          บ           >> %s used HYDRO PUMP!", cPokemon); break;
		case 13: printf("\n          บ           >> %s used SURF!", cPokemon); break;
		case 14: printf("\n          บ           >> It was super effective!"); break;
		case 15: printf("\n          บ           >> It was effective!"); break;
		case 16: printf("\n          บ           >> But the attack missed!"); break;
		case 17: printf("\n          บ           >> Used potion on %s!", cPokemon); break;
		case 18: printf("\n          บ           >> %s fainted!", cPokemon); break;
		case 19: printf("\n          บ           >> Rival chose %s!", cPokemon); break;
		case 20: printf("\n          บ           >> Go %s!", cPokemon); break;
		case 21: printf("\n          บ           >> Which Pokmon would you like to use next?"); break;
		case 22: printf("\n          บ           >> Rival switched Pokmon!"); break;
		case 23: printf("\n          บ           >> Can't understand you! Try again."); break;
		case 24: printf("\n          บ           >> Can't use %s! Try again.", cPokemon); break;
		case 25: printf("\n          บ           >> Can't do that anymore!"); break;
	}
}

/*	This function displays the dialogue box in-battle
	@param	(int)	nDialogue counts which dialogue line is to be displayed for the function displayBattleDialogue
	@param	(int)	PokemonInt is the integer of the Pokemon
	@return	(void)	no return value
*/
void displayBox(int nDialogue, int PokemonInt){
	printf("\n          ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ");
	printf("\n          บ                                                                                                      ");
	displayBattleDialogue(nDialogue, PokemonInt);
	printf("\n          บ                                                                                                      ");
	printf("\n          ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n\n");
}

/*	This function is calculates the damage inflicted
	@param	(int)	nAttack is the integer corresponding to the attack used
	@param	(int)	AP is the attack power of the Pokemon
	@param	(int)	type is the Pokemon type (grass, fire, or water)
	@param	(int)	rtype is the rival Pokemon's type
	@return	(int)	returns the damage inflicted
*/
int calculateDamage(int nAttack, int AP, int type, int rtype){
	srand(time(NULL));
	int A, hit, effectiveness, damage;
	
	switch (type){
		case 1: switch (nAttack){
			case 1: if (130 < AP) A = 110 + rand()%21;
					else A = (AP - 20) + rand()%21;
				
					if (rand()%100 < 89) hit = 1;
					else hit = 0;
					break;
			case 2: if (50 < AP) A = 30 + rand()%21;
					else A = (AP - 20) + rand()%21;
					hit = 1;
					break; 
			case 3: if (55 < AP) A = 35 + rand()%21;
					else A = (AP - 20) + rand()%21;
				
					if (rand()%100 < 94) hit = 1;
					else hit = 0;
					break;
				}
		case 2: switch (nAttack){
			case 1: if (60 < AP) A = 40 + rand()%21;
					else A = (AP - 20) + rand()%21;
					hit = 1;
					break;
			case 2: if (85 < AP) A = 65 + rand()%21;
					else A = (AP - 20) + rand()%21;
					
					if (rand()%100 < 79) hit = 1;
					else hit = 0;
					break; 
			case 3: if (70 < AP) A = 50 + rand()%21;
					else A = (AP - 20) + rand()%21;
				
					if (rand()%100 < 89) hit = 1;
					else hit = 0;
					break;
				}
		case 3: switch (nAttack){
			case 1: if (40 < AP) A = 20 + rand()%21;
					else A = (AP - 20) + rand()%21;
					hit = 1;
					break;
			case 2: if (185 < AP) A = 165 + rand()%21;
					else A = (AP - 20) + rand()%21;
					
					if (rand()%100 < 29) hit = 1;
					else hit = 0;
					break; 
			case 3: if (70 < AP) A = 50 + rand()%21;
					else A = (AP - 20) + rand()%21;
				
					if (rand()%100 < 89) hit = 1;
					else hit = 0;
					break;
		}
		}
	
	if ((type == 1 && rtype == 3) || (type == 2 && rtype == 1) || (type == 3 && rtype == 2)) 
		effectiveness = 1.5;
	else effectiveness = 1;
	
	damage = A * hit * effectiveness;
	return damage;
}

/*	This function is adds 20HP to the Pokemon's health
	@param	(int)	PokemonInt is the integer corresponding to the Pokemon
	@param	(int)	HP is the health points of the Pokemon
	@return	(int)	returns the HP after adding 20
*/
int usePotion(int PokemonInt, int HP){
	int maxHP;
	switch (PokemonInt){
		case 1: maxHP = 160; break;
		case 2: maxHP = 140; break;
		case 3: maxHP = 150; break;
		case 4: maxHP = 125; break;
		case 5: maxHP = 130; break;
		case 6: maxHP = 140; break;
		case 7: maxHP = 180; break;
		case 8: maxHP = 170; break;
		case 9: maxHP = 150; break;
	}
	if (HP == maxHP)
		return HP;
	else if (HP < maxHP - 20)
		return HP + 20;
	else if (HP < maxHP)
		return maxHP;
}

/*	This function accepts an character from the user and clears the screen
	@return	(void)	no return value
*/
void clearScreen(){
	_getch();
	system("cls");
}

/*	This function displays the opening text
	@param	(int)	nCount corresponds to which line is to be displayed
	@param	(int)	nPart gets added to nCount to count which line is to be displayed
	@return	(void)	no return value
*/
void OpeningText(int nCount, int nPart){
	nCount += nPart; //nPart "4" added to skip first 4 cases
	nCount++;
	switch (nCount){
	case 1: printf("     บ >> Hello there! Welcome to the world of Pokmon.                  บ\n");
			printf("     บ >> My name is Oak! People call me the Pokmon Prof!               บ"); break;
	case 2: printf("     บ >> This world is inhabited by creatures called Pokmon!           บ\n");
			printf("     บ >> For some people, Pokmon are pets. Other use them for fights.  บ"); break;
	case 3: printf("     บ >> Myself... I study Pokmon as a profession.                     บ\n");
			printf("     บ                                                                   บ"); break;
	case 4: printf("     บ >> First, what is your name?                                      บ\n");
			printf("     บ                                                                   บ"); break;
	case 5:	printf("     บ >> My grandchild talks about you all the time. They've been your  บ\n");
			printf("     บ >> rival since you were a baby... erm, what is their name again?  บ"); break;	
	case 6: printf("     บ >> That's right! I remember their name now!                       บ\n");
			printf("     บ >> Hey! Your very own Pokmon battle is about to unfold!          บ"); break;
	case 7:	printf("     บ >> A battle of dreams with Pokmon awaits!                        บ\n");
			printf("     บ >> LET'S GO!                                                      บ"); break;
	}
}

/*	This function displays the box for the opening text
	@param	(int)	nPart corresponds to which part of the opening text is to be displayed (will be added to nCount)
	@param	(int)	nDialogue counts how many times it will loop (how many times the user has to press enter)
	@return	(void)	no return value
*/
void OpeningBox(int nPart, int nDialogue){
	int nCount; //nDialogue counts how many times user has to press enter 
	for (nCount = 0; nCount < nDialogue; nCount++){
		printf("\n\n\n\n\n\n\n\n\n\n");
		printf("\n     ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n     บ                                                                   บ\n");
		OpeningText(nCount, nPart);
		printf("\n     บ                                                                   บ\n");
		printf("     ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
		printf("\n                                                Press any key to continue.");
		clearScreen();
	}
}
/*	This function displays the ascii text "Choose 3 Pokemon"
	@return	(void)	no return value
*/
void displayChoosePokemon(){
	printf("\n\n");
	printf("                   _______                       ____ \n");
	printf("                  / ___/ /  ___  ___  ___ ___   |_  / \n");
	printf("                 / /__/ _ \\/ _ \\/ _ \\(_-</ -_) _/_ <  \n");
	printf("                 \\___/_//_/\\___/\\___/___/\\__/ /____/  \n");
	printf("                   / _ \\___  / /_____ __ _  ___  ___  \n");
	printf("                  / ___/ _ \\/  '_/ -_)  ' \\/ _ \\/ _ \\ \n");
	printf("                 /_/   \\___/_/\\_\\\\__/_/_/_/\\___/_//_/ \n\n\n\n");
}

/*	This function displays the Pokemon from which the user will choose 3 from
	@return	(void)	no return value
*/
void displayTable(){
	printf("ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("บ  *  GRASS                                                         บ\n");
	printf("บ   >> BULBASAUR, BELLSPROUT, ODDISH                                บ\n");
	printf("บ  *  FIRE                                                          บ\n");
	printf("บ   >> CHARMANDER, NINETALES, PONYTA                                บ\n");
	printf("บ  *  WATER                                                         บ\n");
	printf("บ   >> SQUIRTLE, PSYDUCK, SEEL                                      บ\n");
	printf("ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
}

/*	This function displays the ascii text Pokemon
	@return	(void)	no return value
*/
void displayLogo(){
	printf("                                .::.\n");
	printf("                              .;:**'            AMC\n");
	printf("                              `                  0\n");
	printf("  .:XHHHHk.              db.   .;;.     dH  MX   0\n");
	printf("oMMMMMMMMMMM       ~MM  dMMP :MMMMMR   MMM  MR      ~MRMN\n");
	printf("QMMMMMb  'MMX       MMMMMMP !MX' ,M~   MMM MMM  .oo. XMMM 'MMM\n");
	printf("  `MMMM.  )M> :X!Hk. MMMM   XMM.o*  IM MMMMMMM X?XMMM MMM>!MMP\n");
	printf("   'MMMb.dM! XM M'?M MMMMMX.`MMMMMMM~  MM MMM XM ` 'MX MMXXMM\n");
	printf("    ~MMMMM~ XMM. .XM XM` MMMb.~*?**~ .MMX M t MMbooMM XMMMMMP\n");
	printf("     ?MMM>  YMMMMMM! MM   `?MMRb.    `***   !L MMMMM XM IMMM\n");
	printf("      MMMX   'MMMM'  MM       ~M:           !Mh.'''' dMI IMMP\n");
	printf("      'MMM.                                             IMX\n");
	printf("       ~M!M                                             IMP\n");
	
	printf("                    PRESS ANY KEY TO CONTINUE.");
	clearScreen();
}

int main(){
	char cAns[10];																//used to confirm input
	int nCheckInput;															//used to check if input is correct
	int nRand;
    int nAns;
	
	char cUserName[10], cRivalName[10];											//user's username and rival name
	
	char cUserPokemon1[10], cUserPokemon2[10], cUserPokemon3[10];				//stores the name of user's pokemon 
	char cRivalPokemon1[10], cRivalPokemon2[10], cRivalPokemon3[10];			//stores the name of computer's pokemon
	
	int nUser1, nUser2, nUser3;													//stores integer assigned to user's pokemon (serves as its ID)
	int nType1, nType2, nType3;													//stores the type of the user's pokemon
	int nHP1, nHP2, nHP3;														//stores the HP of the user's pokemon
	int nAP1, nAP2, nAP3;														//stores the AP of the user's pokemon
	
	int nComp1, nComp2, nComp3;													//stores integer assigned to rival's pokemon (serves as its ID)
	int nRivalType1, nRivalType2, nRivalType3;									//stores the type of the rival's pokemon
	int nRivalHP1, nRivalHP2, nRivalHP3;										//stores the HP of the rival's pokemon
	int nRivalAP1, nRivalAP2, nRivalAP3;										//stores the AP of the rival's pokemon
	
	int nAttack;
	int nDamage;
	int nTurn = 1;
	int bEndBattle = 0;
	int nChangeInt = 0, nRivalCurrent = 0, nUserCurrent = 0;
	
	char cUserPokemon[10];														//user's current pokemon name
	int nUser;																	//1-9 integer for current pokemon
	int nType, nHP, AP;															//for current pokemon stats
	
	char cRivalPokemon[10];														//rival's current pokemon name
	int nComp;																	//1-9 integer for rival's pokemon
	int nRivalType, nRivalHP, nRivalAP;											//for rival's current pokemon
	
/*	This part displays the opening sequence of the game
*/
	OpeningBox(0, 4); 															//counts (1) case it starts, (2) how many times to press (dialogue count)
	
	do
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n       >> Enter your name: ");
		scanf("%s", &cUserName);
		do
		{
			printf("\n       >> Right! So your name is %s! Is that correct? 'Yes' or 'No'\n       >> ", cUserName);
			scanf("%s", &cAns);
			if (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n       >> Can't understand you. Try again!");
			}
		} while (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0);
		system("cls");
	} while (stricmp(cAns, "No") == 0);
	
	system("cls");
	OpeningBox(4, 1);
	
	do {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n       >> Enter your rival's name: ");
		scanf("%s", &cRivalName);
		do
		{
			strcpy(cAns, "Yes");
			printf("\n       >> Right! Their name is %s! Is that correct? 'Yes' or 'No'\n       >> ", cRivalName);
			scanf("%s", &cAns);
			if (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n       >> Can't understand you. Try again!");
			}
		} while (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0);
		system("cls");
	} while (stricmp(cAns, "No") == 0);
	
	system("cls");
	
//	This part is where the user will choose the first Pokemon
	OpeningBox(5, 2);
	
	displayLogo();
	displayChoosePokemon();
	displayTable();

	do
	{ 		
		do
		{		
			printf("\n  >> Choose your first Pokmon: ");
			scanf("%s", &cUserPokemon1);
		
			nCheckInput = 0;
		
			if (stricmp(cUserPokemon1, "Bulbasaur") == 0)
			{
				strcpy(cUserPokemon1, "BULBASAUR");
				nUser1 = 1;
				nType1 = 1;
				nHP1 = 160;
				nAP1 = 40;
			}
	
			else if (stricmp(cUserPokemon1, "Bellsprout") == 0)
			{
				strcpy(cUserPokemon1, "BELLSPROUT");
				nUser1 = 2;
				nType1 = 1;
				nHP1 = 140;
				nAP1 = 60;
			}
	
			else if (stricmp(cUserPokemon1, "Oddish") == 0)
			{
				strcpy(cUserPokemon1, "ODDISH");
				nUser1 = 3;
				nType1 = 1;
				nHP1 = 150;
				nAP1 = 50;
			}
		
			else if (stricmp(cUserPokemon1, "Charmander") == 0)
			{
				strcpy(cUserPokemon1, "CHARMANDER");
				nUser1 = 4;
				nType1 = 2;
				nHP1 = 125;
				nAP1 = 70;
			}
		
			else if (stricmp(cUserPokemon1, "Ninetales") == 0)
			{
				strcpy(cUserPokemon1, "NINETALES");
				nUser1 = 5;
				nType1 = 2;
				nHP1 = 130;
				nAP1 = 50;
			}
		
			else if (stricmp(cUserPokemon1, "Ponyta") == 0)
			{
				strcpy(cUserPokemon1, "PONYTA");
				nUser1 = 6;
				nType1 = 2;
				nHP1 = 140;
				nAP1 = 60;
			}
		
			else if (stricmp(cUserPokemon1, "Squirtle") == 0)
			{
				strcpy(cUserPokemon1, "SQUIRTLE");
				nUser1 = 7;
				nType1 = 3;
				nHP1 = 180;
				nAP1 = 20;
			}
		
			else if (stricmp(cUserPokemon1, "Psyduck") == 0)
			{
				strcpy(cUserPokemon1, "PSYDUCK");
				nUser1 = 8;
				nType1 = 3;
				nHP1 = 170;
				nAP1 = 40;
			}
		
			else if (stricmp(cUserPokemon1, "Seel") == 0)
			{
				strcpy(cUserPokemon1, "SEEL");
				nUser1 = 9;
				nType1 = 3;
				nHP1 = 150;
				nAP1 = 50;
			}
		
			else //will be read if user's input is invalid
			{
				nCheckInput = 1;
			}
		
			if (nCheckInput == 1)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n  >> That's not a Pokmon! Try again.");
			}
		} while(nCheckInput == 1);

			system("cls");
			displayPokedex1(nUser1);
			do
			{
				strcpy(cAns, "Yes");
				printf("\n       >> Are you sure you want %s? 'Yes' or 'No'\n       >> ", cUserPokemon1);
				scanf("%s", &cAns);
				if (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0)
				{
					system("cls");
					printf("       >> POKEMON: %s\n\n", cUserPokemon1);
					displayPokedex1(nUser1);
					printf("\n       >> Can't understand you. Try again!");
				}
			} while (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0);
			system("cls");
			if (stricmp(cAns, "No") == 0)
			{
				displayChoosePokemon();
				displayTable();
			}
	} while (stricmp(cAns, "No") == 0);
	
	displayChoosePokemon();
	displayTable();
	
	printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
	
	//     CHOOSING 2ND POKEMON     //
	do
	{ 		
		do
		{		
			printf("\n  >> Choose your second Pokmon: ");
			scanf("%s", &cUserPokemon2);
		
			nCheckInput = 0;
		
			if (stricmp(cUserPokemon2, "Bulbasaur") == 0)
			{
				strcpy(cUserPokemon2, "BULBASAUR");
				nUser2 = 1;
				nType2 = 1;
				nHP2 = 160;
				nAP2 = 40;
			}
	
			else if (stricmp(cUserPokemon2, "Bellsprout") == 0)
			{
				strcpy(cUserPokemon2, "BELLSPROUT");
				nUser2 = 2;
				nType2 = 1;
				nHP2 = 140;
				nAP2 = 60;
			}
	
			else if (stricmp(cUserPokemon2, "Oddish") == 0)
			{
				strcpy(cUserPokemon2, "ODDISH");
				nUser2 = 3;
				nType2 = 1;
				nHP2 = 150;
				nAP2 = 50;
			}
		
			else if (stricmp(cUserPokemon2, "Charmander") == 0)
			{
				strcpy(cUserPokemon2, "CHARMANDER");
				nUser2 = 4;
				nType2 = 2;
				nHP2 = 125;
				nAP2 = 70;
			}
		
			else if (stricmp(cUserPokemon2, "Ninetales") == 0)
			{
				strcpy(cUserPokemon2, "NINETALES");
				nUser2 = 5;
				nType2 = 2;
				nHP2 = 130;
				nAP2 = 50;
			}
		
			else if (stricmp(cUserPokemon2, "Ponyta") == 0)
			{
				strcpy(cUserPokemon2, "PONYTA");
				nUser2 = 6;
				nType2 = 2;
				nHP2 = 140;
				nAP2 = 60;
			}
		
			else if (stricmp(cUserPokemon2, "Squirtle") == 0)
			{
				strcpy(cUserPokemon2, "SQUIRTLE");
				nUser2 = 7;
				nType2 = 3;
				nHP2 = 180;
				nAP2 = 20;
			}
		
			else if (stricmp(cUserPokemon2, "Psyduck") == 0)
			{
				strcpy(cUserPokemon2, "PSYDUCK");
				nUser2 = 8;
				nType2 = 3;
				nHP2 = 170;
				nAP2 = 40;
			}
		
			else if (stricmp(cUserPokemon2, "Seel") == 0)
			{
				strcpy(cUserPokemon2, "SEEL");
				nUser2 = 9;
				nType2 = 3;
				nHP2 = 150;
				nAP2 = 50;
			}
		
			else //will be read if user's input is invalid
			{
				nCheckInput = 1;
			}
		
			if (stricmp(cUserPokemon1, cUserPokemon2) == 0)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> But you've already chosen %s! Pick again.", cUserPokemon1);
			}
			if (nCheckInput == 1)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> That's not a Pokmon! Try again.");
			}
		
		} while((stricmp(cUserPokemon1, cUserPokemon2) == 0 ) || (nCheckInput == 1));

			system("cls");
			displayPokedex1(nUser2);
			do {
				strcpy(cAns, "Yes");
				printf("\n       >> Are you sure you want %s? 'Yes' or 'No'\n       >> ", cUserPokemon2);
				scanf("%s", &cAns);
				if (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0)
				{
					system("cls");
					printf("       >> POKEMON: %s\n\n", cUserPokemon2);
					displayPokedex1(nUser2);
					printf("\n       >> Can't understand you. Try again!");
				}
			} while (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0);
			system("cls");
			if (stricmp(cAns, "No") == 0)
			{
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
			}
	} while (stricmp(cAns, "No") == 0);
	
	displayChoosePokemon();
	displayTable();
	
	printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
	printf("\n  >> Second Pokmon: %s", cUserPokemon2);
	
	//     CHOOSING 3RD POKEMON     //
	do
	{ 		
		do
		{		
			printf("\n  >> Choose your third Pokmon: ");
			scanf("%s", &cUserPokemon3);
			
			nCheckInput = 0;
			
			if (stricmp(cUserPokemon3, "Bulbasaur") == 0)
			{
				strcpy(cUserPokemon3, "BULBASAUR");
				nUser3 = 1;
				nType3 = 1;
				nHP3 = 160;
				nAP3 = 40;
			}
	
			else if (stricmp(cUserPokemon3, "Bellsprout") == 0)
			{
				strcpy(cUserPokemon3, "BELLSPROUT");
				nUser3 = 2;
				nType3 = 1;
				nHP3 = 140;
				nAP3 = 60;
			}
	
			else if (stricmp(cUserPokemon3, "Oddish") == 0)
			{
				strcpy(cUserPokemon3, "ODDISH");
				nUser3 = 3;
				nType3 = 1;
				nHP3 = 150;
				nAP3 = 50;
			}
		
			else if (stricmp(cUserPokemon3, "Charmander") == 0)
			{
				strcpy(cUserPokemon3, "CHARMANDER");
				nUser3 = 4;
				nType3 = 2;
				nHP3 = 125;
				nAP3 = 70;
			}
		
			else if (stricmp(cUserPokemon3, "Ninetales") == 0)
			{
				strcpy(cUserPokemon3, "NINETALES");
				nUser3 = 5;
				nType3 = 2;
				nHP3 = 130;
				nAP3 = 50;
			}
		
			else if (stricmp(cUserPokemon3, "Ponyta") == 0)
			{
				strcpy(cUserPokemon3, "PONYTA");
				nUser3 = 6;
				nType3 = 2;
				nHP3 = 140;
				nAP3 = 60;
			}
		
			else if (stricmp(cUserPokemon3, "Squirtle") == 0)
			{
				strcpy(cUserPokemon3, "SQUIRTLE");
				nUser3 = 7;
				nType3 = 3;
				nHP3 = 180;
				nAP3 = 20;
			}
		
			else if (stricmp(cUserPokemon3, "Psyduck") == 0)
			{
				strcpy(cUserPokemon3, "PSYDUCK");
				nUser3 = 8;
				nType3 = 3;
				nHP3 = 170;
				nAP3 = 40;
			}
		
			else if (stricmp(cUserPokemon3, "Seel") == 0)
			{
				strcpy(cUserPokemon3, "SEEL");
				nUser3 = 9;
				nType3 = 3;
				nHP3 = 150;
				nAP3 = 50;
			}
		
			else //will be read if user's input is invalid
			{
				nCheckInput = 1;
			}
		
			if (stricmp(cUserPokemon1, cUserPokemon3) == 0)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> Second Pokmon: %s", cUserPokemon2);
				printf("\n  >> But you've already chosen %s! Pick again.", cUserPokemon1);
			}
			
			if (stricmp(cUserPokemon2, cUserPokemon3) == 0)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> Second Pokmon: %s", cUserPokemon2);
				printf("\n  >> But you've already chosen %s! Pick again.", cUserPokemon2);
			}
			
			if (nCheckInput == 1)
			{
				system("cls");
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> Second Pokmon: %s", cUserPokemon2);
				printf("\n  >> That's not a Pokmon! Try again.");
			}
		
		} while((stricmp(cUserPokemon1, cUserPokemon3) == 0 ) || (stricmp(cUserPokemon2, cUserPokemon3) == 0) || (nCheckInput == 1));

			system("cls");
			displayPokedex1(nUser3);
			do
			{
				strcpy(cAns, "Yes");
				printf("\n       >> Are you sure you want %s? 'Yes' or 'No'\n       >> ", cUserPokemon3);
				scanf("%s", &cAns);
				if (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0)
				{
					system("cls");
					printf("       >> POKEMON: %s\n\n", cUserPokemon3);
					displayPokedex1(nUser3);
					printf("\n       >> Can't understand you. Try again!");
				}
			} while (stricmp(cAns, "Yes") != 0 && stricmp(cAns, "No") != 0);
			system("cls");
			if (stricmp(cAns, "No") == 0)
			{
				displayChoosePokemon();
				displayTable();
				printf("\n\n  >> First Pokmon: %s", cUserPokemon1);
				printf("\n  >> Second Pokmon: %s", cUserPokemon2);
			}
	} while (stricmp(cAns, "No") == 0);
	
	// RANDOM INTEGER GENERATOR FOR CHOOSING THE COMPUTER'S POKEMON
	
	srand(time(NULL));
	
	do
	{
		nComp1 = rand() % 10;
	} while (nComp1 == nUser1 || nComp1 == nUser2 || nComp1 == nUser3 || nComp1 == 0);
	
	do
	{
		nComp2 = rand() % 10;
	} while (nComp2 == nUser1 || nComp2 == nUser2 || nComp2 == nUser3 || nComp2 == nComp1 || nComp2 == 0);
	
	do
	{
		nComp3 = rand() % 10;
	} while (nComp3 == nUser1 || nComp3 == nUser2 || nComp3 == nUser3 || nComp3 == nComp1 || nComp3 == nComp2 || nComp3 == 0);
	
	// ASSIGNING THE INTEGER ITS CORRESPONDING TYPE, HP, AND AP
	
	switch(nComp1)
	{
		case 1: strcpy(cRivalPokemon1, "BULBASAUR"); nRivalType1 = 1; nRivalHP1 = 160; nRivalAP1 = 40; break;
		case 2: strcpy(cRivalPokemon1, "BELLSPROUT"); nRivalType1 = 1; nRivalHP1 = 140; nRivalAP1 = 60; break;
		case 3: strcpy(cRivalPokemon1, "ODDISH"); nRivalType1 = 1; nRivalHP1 = 150; nRivalAP1 = 50; break;
		case 4: strcpy(cRivalPokemon1, "CHARMANDER"); nRivalType1 = 2; nRivalHP1 = 125; nRivalAP1 = 70; break;
		case 5: strcpy(cRivalPokemon1, "NINETALES"); nRivalType1 = 2; nRivalHP1 = 130; nRivalAP1 = 50; break;
		case 6: strcpy(cRivalPokemon1, "PONYTA"); nRivalType1 = 2; nRivalHP1 = 140; nRivalAP1 = 60; break;
		case 7: strcpy(cRivalPokemon1, "SQUIRTLE"); nRivalType1 = 3; nRivalHP1 = 180; nRivalAP1 = 20; break;
		case 8: strcpy(cRivalPokemon1, "PSYDUCK"); nRivalType1 = 3; nRivalHP1 = 170; nRivalAP1 = 40; break;
		case 9: strcpy(cRivalPokemon1, "SEEL"); nRivalType1 = 3; nRivalHP1 = 150; nRivalAP1 = 60; break;
	}
	
	switch(nComp2)
	{
		case 1: strcpy(cRivalPokemon2, "BULBASAUR"); nRivalType2 = 1; nRivalHP2 = 160; nRivalAP2 = 40; break;
		case 2: strcpy(cRivalPokemon2, "BELLSPROUT"); nRivalType2 = 1; nRivalHP2 = 140; nRivalAP2 = 60; break;
		case 3: strcpy(cRivalPokemon2, "ODDISH"); nRivalType2 = 1; nRivalHP2 = 150; nRivalAP2 = 50; break;
		case 4: strcpy(cRivalPokemon2, "CHARMANDER"); nRivalType2 = 2; nRivalHP2 = 125; nRivalAP2 = 70; break;
		case 5: strcpy(cRivalPokemon2, "NINETALES"); nRivalType2 = 2; nRivalHP2 = 130; nRivalAP2 = 50; break;
		case 6: strcpy(cRivalPokemon2, "PONYTA"); nRivalType2 = 2; nRivalHP2 = 140; nRivalAP2 = 60; break;
		case 7: strcpy(cRivalPokemon2, "SQUIRTLE"); nRivalType2 = 3; nRivalHP2 = 180; nRivalAP2 = 20; break;
		case 8: strcpy(cRivalPokemon2, "PSYDUCK"); nRivalType2 = 3; nRivalHP2 = 170; nRivalAP2 = 40; break;
		case 9: strcpy(cRivalPokemon2, "SEEL"); nRivalType2 = 3; nRivalHP2 = 150; nRivalAP2 = 60; break;
	}
	
	switch(nComp3)
	{
		case 1: strcpy(cRivalPokemon3, "BULBASAUR"); nRivalType3 = 1; nRivalHP3 = 160; nRivalAP3 = 40; break;
		case 2: strcpy(cRivalPokemon3, "BELLSPROUT"); nRivalType3 = 1; nRivalHP3 = 140; nRivalAP3 = 60; break;
		case 3: strcpy(cRivalPokemon3, "ODDISH"); nRivalType3 = 1; nRivalHP3 = 150; nRivalAP3 = 50; break;
		case 4: strcpy(cRivalPokemon3, "CHARMANDER"); nRivalType3 = 2; nRivalHP3 = 125; nRivalAP3 = 70; break;
		case 5: strcpy(cRivalPokemon3, "NINETALES"); nRivalType3 = 2; nRivalHP3 = 130; nRivalAP3 = 50; break;
		case 6: strcpy(cRivalPokemon3, "PONYTA"); nRivalType3 = 2; nRivalHP3 = 140; nRivalAP3 = 60; break;
		case 7: strcpy(cRivalPokemon3, "SQUIRTLE"); nRivalType3 = 3; nRivalHP3 = 180; nRivalAP3 = 20; break;
		case 8: strcpy(cRivalPokemon3, "PSYDUCK"); nRivalType3 = 3; nRivalHP3 = 170; nRivalAP3 = 40; break;
		case 9: strcpy(cRivalPokemon3, "SEEL"); nRivalType3 = 3; nRivalHP3 = 150; nRivalAP3 = 60; break;
	}
	
	do{
		
		printf("\n   ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ");	
		printf("\n   บ  >> Team %s", cUserName);
		printf("\n   บ  >> First Pokmon: %s", cUserPokemon1);
		printf("\n   บ  >> Second Pokmon: %s", cUserPokemon2);
		printf("\n   บ  >> Third Pokmon: %s", cUserPokemon3);
		printf("\n   ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
		printf("\n                            ___  __ ___________  ________ __  ______\n");
		printf("                            \\  \\/ // __ \\_  __ \\/  ___/  |  \\/  ___/\n");          
		printf("=============================\\   /\\  ___/|  | \\/\\___ \\|  |  /\\___ \\==================================\n");
		printf("                              \\_/  \\___  >__|  /____  >____//____  >\n");
		printf("                                       \\/           \\/           \\/ \n");
		printf("\n                                 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ");	
		printf("\n                                 บ  >> Team %s", cRivalName);
		printf("\n                                 บ  >> First Pokmon: %s", cRivalPokemon1);
		printf("\n                                 บ  >> Second Pokmon: %s", cRivalPokemon2);
		printf("\n                                 บ  >> Third Pokmon: %s", cRivalPokemon3);
		printf("\n                                 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ");
	
		printf("\n\n  >> Which Pokmon would you like to choose first?\n  >> ");
		scanf("%s", &cUserPokemon);
		
		nCheckInput = 0;
		
		if(stricmp(cUserPokemon, cUserPokemon1) == 0)
		{
			nUser = nUser1;
			nType = nType1;
			nHP = nHP1;
			AP = nAP1;
			nUserCurrent = 1;
		}
		else if(stricmp(cUserPokemon, cUserPokemon2) == 0)
		{
			nUser = nUser2;
			nType = nType2;
			nHP = nHP2;
			AP = nAP2;
			nUserCurrent = 2;
		}
		else if(stricmp(cUserPokemon, cUserPokemon3) == 0)
		{
			nUser = nUser3;
			nType = nType3;
			nHP = nHP3;
			AP = nAP3;
			nUserCurrent = 3;
		}
		else nCheckInput = 1;
		
		if (nCheckInput == 1)
		{
			system("cls");
			printf("\n\n   ษอออออออออออออออออออออออออออออออออออออออออออป");
			printf("\n   บ  >> Can't understand you. Try again!      บ");
			printf("\n   ศอออออออออออออออออออออออออออออออออออออออออออผ\n");
		}
	} while(nCheckInput == 1);
		
	printf("\n  >> You chose %s!", cUserPokemon);
	

	nRand = rand()%3 + 1;
	if (nRand == 1)
	{
		strcpy(cRivalPokemon, cRivalPokemon1); nComp = nComp1; nRivalType = nRivalType1; nRivalHP = nRivalHP1; nRivalAP = nRivalAP1; nRivalCurrent = 1;
	}
	else if (nRand == 2)
	{
		strcpy(cRivalPokemon, cRivalPokemon2); nComp = nComp2; nRivalType = nRivalType2; nRivalHP = nRivalHP2; nRivalAP = nRivalAP2; nRivalCurrent = 2;
	}
	else if (nRand == 3)
	{
		strcpy(cRivalPokemon, cRivalPokemon3); nComp = nComp3; nRivalType = nRivalType3; nRivalHP = nRivalHP3; nRivalAP = nRivalAP3; nRivalCurrent = 3;
	}
		
	printf("\n  >> %s chose %s!", cRivalName, cRivalPokemon);
	
	printf("\n     Press any key to continue."); clearScreen();

//	actual battle sequence

	do
	{
		/*	User's turn
		*/
		if (nTurn == 1)
		{
			system("cls"); displayPokemon(nComp, nUser, nRivalHP, nHP); displayBox(1, nUser);
			printf("                      >> ");
			scanf("%d", &nAns);
			
			/*	User chooses attack
			*/
			
			if (nAns == 1)
			{
				
				/*	Current Pokemon is a Grass type Pokemon
				*/
				if (nType == 1)
				{
					do{
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(2, nUser);
					printf("                      >> ");
					scanf("%d", &nAttack);
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nAttack)
					{
						case 1: displayBox(5, nUser); break;
						case 2: displayBox(6, nUser); break;
						case 3: displayBox(7, nUser); break;
					}
					if (nAttack != 1 && nAttack != 2 && nAttack != 3)
					{
						system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(23, nUser); _getch();
					}
				} while (nAttack != 1 && nAttack != 2 && nAttack != 3);
				}
				
				/*	Current Pokemon is a Fire type Pokemon
				*/
				else if (nType == 2)
				{
					do
					{
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(3, nUser);
					printf("                      >> ");
					scanf("%d", &nAttack);
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nAttack)
					{
						case 1: displayBox(8, nUser); break;
						case 2: displayBox(9, nUser); break;
						case 3: displayBox(10, nUser); break;
					}
					if (nAttack != 1 && nAttack != 2 && nAttack != 3)
					{
						system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(23, nUser); _getch();
					}
				} while (nAttack != 1 && nAttack != 2 && nAttack != 3);
				}
				
				/*	Current Pokemon is a Water type Pokemon
				*/
				else if (nType == 3)
				{
					do
					{
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(4, nUser);
					printf("                      >> ");
					scanf("%d", &nAttack);
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nAttack)
					{
						case 1: displayBox(11, nUser); break;
						case 2: displayBox(12, nUser); break;
						case 3: displayBox(13, nUser); break;
					}
					if (nAttack != 1 && nAttack != 2 && nAttack != 3)
					{
						system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(23, nUser); _getch();
					}
				} while (nAttack != 1 && nAttack != 2 && nAttack != 3);
				}
				nDamage = calculateDamage(nAttack, AP, nType, nRivalType);
				nRivalHP -= nDamage;
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
				
				// if the attack misses:
				if (nDamage == 0)
					displayBox(16, nUser);
				
				// if the attack is super effective:
				else if ((nType == 1 && nRivalType == 3) || (nType == 2 && nRivalType == 1) || (nType == 3 && nRivalType == 2))
					displayBox(14, nUser);
				
				// if the attack is not super effective:
				else
					displayBox(15, nUser);
				
				if (nRivalHP > 0) nTurn = 2;
				else if (nRivalHP <= 0) nTurn = 4;
			}
			
			/*	User chooses switch
			*/
			else if (nAns == 2){
				if ((nHP1 > 0 && nHP2 > 0) || (nHP1 > 0 && nHP3 > 0) || (nHP2 > 0 && nHP3 > 0)){
					do{
						nChangeInt = 0;
						system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(21, nUser);
						
						//displays the available Pokemon:
						switch(nUserCurrent){
							case 1: if (nHP2 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon2, nHP2, nAP2);
									if (nHP3 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon3, nHP3, nAP3); break;
							case 2: if (nHP1 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon1, nHP1, nAP1);
									if (nHP3 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon3, nHP3, nAP3); break;
							case 3: if (nHP1 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon1, nHP1, nAP1);
									if (nHP2 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon2, nHP2, nAP2); break;
						}
						printf("                      >> "); 
						scanf("%s", &cUserPokemon);
				
						nCheckInput = 0;
						
						if(stricmp(cUserPokemon, cUserPokemon1) == 0){
							nUser = nUser1; nType = nType1; nHP = nHP1; AP = nAP1; nChangeInt = 1;
						}
						else if(stricmp(cUserPokemon, cUserPokemon2) == 0){
							nUser = nUser2; nType = nType2; nHP = nHP2; AP = nAP2; nChangeInt = 2;
						}
						else if(stricmp(cUserPokemon, cUserPokemon3) == 0){
							nUser = nUser3; nType = nType3; nHP = nHP3; AP = nAP3; nChangeInt = 3;
						}
						else nCheckInput = 1;
						
						// if the user input is incorrect:
						if (nCheckInput == 1){
							system("cls");
							displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(23, nUser);
							clearScreen();
						}
						
						// if the user chooses a Pokemon that has 0 HP or chooses the current Pokemon:
						if (nHP <= 0 || nChangeInt == nUserCurrent){
							system("cls");
							displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(24, nUser);
							clearScreen();
						}
					} while(nCheckInput == 1 || nHP <= 0 || nChangeInt == nUserCurrent);
					
					nUserCurrent = nChangeInt;
								
					printf("\n                                >> You chose %s!", cUserPokemon);
					nTurn = 2;
				}
				else {
					system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(25, nUser); _getch();
					nTurn = 1;
				}
				}
				
			/*	User chooses potion
			*/
			else if (nAns == 3){
				nHP = usePotion(nUser, nHP);
				_getch; system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(17, nUser);
				nTurn = 2;
			}
		}

		/*	Computer's turn
		*/
		else if (nTurn == 2)
		{
			nRand = rand()%100 + 1;
			
			/*	Computer will attack
			*/
			if (nRand < 67){
				
				/*	Computer's current Pokemon is a Grass type
				*/
				if (nRivalType == 1)
				{
					nRand = rand()%3 + 1;
					_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nRand)
					{
						case 1: displayBox(5, nComp); break;
						case 2: displayBox(6, nComp); break;
						case 3: displayBox(7, nComp); break;
					}
				}
				
				/*	Computer's current Pokemon is a Fire type
				*/
				else if (nRivalType == 2)
				{
					nRand = rand()%3 + 1;
					_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nRand)
					{
						case 1: displayBox(8, nComp); break;
						case 2: displayBox(9, nComp); break;
						case 3: displayBox(10, nComp); break;
					}
				}
				
				/*	Computer's current Pokemon is a Water type
				*/
				else if (nRivalType == 3)
				{
					nRand = rand()%3 + 1;
					_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
					switch(nRand)
					{
						case 1: displayBox(11, nComp); break;
						case 2: displayBox(12, nComp); break;
						case 3: displayBox(13, nComp); break;
					}
				}
				nDamage = calculateDamage(nAttack, AP, nType, nRivalType);
				nHP -= nDamage;
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP);
				
				// if the attack missed:
				if (nDamage == 0)
				{
					displayBox(16, nComp); _getch(); system("cls");
				}
				
				// if the attack is super effective:
				else if ((nRivalType == 1 && nType == 3) || (nRivalType == 2 && nType == 1) || (nRivalType == 3 && nType == 2))
				{
					displayBox(14, nComp); _getch(); system("cls");
				}
				
				// if the attack is not super effective
				else
				{
					displayBox(15, nComp); _getch(); system("cls");
				}
				if (nHP > 0) nTurn = 1;
			    else if (nHP <= 0) nTurn = 3;
			}
			
			/*	Computer will switch
			*/
			else if (nRand >= 67 && nRand < 84)
			{
				if ((nRivalHP1 > 0 && nRivalHP2 > 0) || (nRivalHP1 > 0 && nRivalHP3 > 0) || (nRivalHP2 > 0 && nRivalHP3 > 0))
				{
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(22, nComp);
				do
				{
					nChangeInt = 0;
					nRand = rand()%3 + 1;
					switch(nRand)
					{
						case 1: strcpy(cRivalPokemon, cRivalPokemon1); nComp = nComp1; nRivalType = nRivalType1; nRivalHP = nRivalHP1; nRivalAP = nRivalAP1; nChangeInt = 1; break;
						case 2: strcpy(cRivalPokemon, cRivalPokemon2); nComp = nComp2; nRivalType = nRivalType2; nRivalHP = nRivalHP2; nRivalAP = nRivalAP2; nChangeInt = 2; break;
						case 3: strcpy(cRivalPokemon, cRivalPokemon3); nComp = nComp3; nRivalType = nRivalType3; nRivalHP = nRivalHP3; nRivalAP = nRivalAP3; nChangeInt = 3; break;
					}
				} while (nRivalHP <= 0 || nRivalCurrent == nChangeInt);
				nRivalCurrent = nChangeInt;
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(19, nComp);
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(20, nComp); _getch();
				nTurn = 1;
				}
				else nTurn = 2;
			}
				
			/*	Computer will use a potion
			*/
			else if (nRand >= 84 && nRand < 100)
			{
				nRivalHP = usePotion(nComp, nRivalHP);
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(17, nComp);
				nTurn = 1; _getch();
			}
		}

		/*	User is forced to switch
		*/
		else if (nTurn == 3)
		{
			do
			{
				system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(18, nUser);
				_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(21, nUser);
				
				nChangeInt = 0;
				
				// displays the Pokemon available:
				switch(nUserCurrent)
				{
					case 1: if (nHP2 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon2, nHP2, nAP2);
							if (nHP3 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon3, nHP3, nAP3); break;
					case 2: if (nHP1 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon1, nHP1, nAP1);
							if (nHP3 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon3, nHP3, nAP3); break;
					case 3: if (nHP1 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon1, nHP1, nAP1);
							if (nHP2 > 0) printf("\n                                >> %s (HP %d) (AP %d)", cUserPokemon2, nHP2, nAP2); break;
				}
				printf("                      >> ");
				scanf("%s", &cUserPokemon);
		
				nCheckInput = 0;
				
				if(stricmp(cUserPokemon, cUserPokemon1) == 0)
				{
					nUser = nUser1; nType = nType1; nHP = nHP1; AP = nAP1; nChangeInt = 1;
				}
				else if(stricmp(cUserPokemon, cUserPokemon2) == 0)
				{
					nUser = nUser2; nType = nType2; nHP = nHP2; AP = nAP2; nChangeInt = 2;
				}
				else if(stricmp(cUserPokemon, cUserPokemon3) == 0)
				{
					nUser = nUser3; nType = nType3; nHP = nHP3; AP = nAP3; nChangeInt = 3;
				}
				else nCheckInput = 1;
				
				// if user input is incorrect:
				if (nCheckInput == 1)
				{
					system("cls");
					displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(23, nUser);
					clearScreen();
				}
				
				// if user chooses a Pokemon that has 0 HP or the current Pokemon:
				if (nHP <= 0 || nChangeInt == nUserCurrent)
				{
					system("cls");
					displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(24, nUser);
					clearScreen();
				}
			} while(nCheckInput == 1 || nHP <= 0 || nChangeInt == nUserCurrent);
				
			nUserCurrent = nChangeInt;
						
			printf("\n                                >> You chose %s!", cUserPokemon);
			nTurn = 2;
			}
			
		/*	Computer is forced to switch
		*/		
		else if (nTurn == 4)
		{
			_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(18, nComp);
			do {
				nRand = rand()%3 + 1;
				switch(nRand)
				{
					nChangeInt = 0;
					case 1: strcpy(cRivalPokemon, cRivalPokemon1); nComp = nComp1; nRivalType = nRivalType1; nRivalHP = nRivalHP1; nRivalAP = nRivalAP1; nChangeInt = 1; break;
					case 2: strcpy(cRivalPokemon, cRivalPokemon2); nComp = nComp2; nRivalType = nRivalType2; nRivalHP = nRivalHP2; nRivalAP = nRivalAP2; nChangeInt = 2; break;
					case 3: strcpy(cRivalPokemon, cRivalPokemon3); nComp = nComp3; nRivalType = nRivalType3; nRivalHP = nRivalHP3; nRivalAP = nRivalAP3; nChangeInt = 3; break;
				}
			} while (nRivalHP <= 0 || nChangeInt == nRivalCurrent);
			nRivalCurrent = nChangeInt;
			_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(19, nComp);
			_getch(); system("cls"); displayPokemon (nComp, nUser, nRivalHP, nHP); displayBox(20, nComp); _getch();
			nTurn = 1;
		}
				
		switch(nRivalCurrent)
		{
			case 1: nRivalHP1 = nRivalHP; break;
			case 2: nRivalHP2 = nRivalHP; break;
			case 3: nRivalHP3 = nRivalHP; break;
		}
				
		switch(nUserCurrent)
		{
			case 1: nHP1 = nHP; break;
			case 2: nHP2 = nHP; break;
			case 3: nHP3 = nHP; break;
		}
		
		if (nHP1 <= 0 && nHP2 <= 0 && nHP3 <= 0)
		{
			_getch(); system("cls");
			printf("                                      %s won!\n", cRivalName);
			printf("                                      %s,\n", cUserName);
			printf("                                                                                     __ \n");
			printf(" _____     _   _              _         _                  _      _   _             |  |\n");
			printf("| __  |___| |_| |_ ___ ___   | |_ _ ___| |_    ___ ___ _ _| |_   | |_|_|_____ ___   |  |\n");
			printf("| __ -| -_|  _|  _| -_|  _|  | | | |  _| '_|  |   | -_|_'_|  _|  |  _| |     | -_|  |__|\n");
			printf("|_____|___|_| |_| |___|_|    |_|___|___|_,_|  |_|_|___|_,_|_|    |_| |_|_|_|_|___|  |__|\n");
			bEndBattle = 1;
		}
		if (nRivalHP1 <= 0 && nRivalHP2 <= 0 && nRivalHP3 <= 0)
		{
			_getch(); system("cls");
			printf("                          %s,\n", cUserName);
			printf("                                                __ \n");
			printf("              __ __                            |  |\n");
			printf("             |  |  |___ _ _    _ _ _ ___ ___   |  |\n");
			printf("             |_   _| . | | |  | | | | . |   |  |__|\n");
			printf("               |_| |___|___|  |_____|___|_|_|  |__|\n");
			printf("                                                              __ \n");
			printf(" _____                     _       _     _   _               |  |\n");
			printf("|     |___ ___ ___ ___ ___| |_ _ _| |___| |_|_|___ ___ ___   |  |\n");
			printf("|   --| . |   | . |  _| .'|  _| | | | .'|  _| | . |   |_ -|  |__|\n");
			printf("|_____|___|_|_|_  |_| |__,|_| |___|_|__,|_| |_|___|_|_|___|  |__|\n");
			printf("              |___|\n");
			bEndBattle = 1;
		}
	} while (bEndBattle == 0);
	
	return 0;
}
