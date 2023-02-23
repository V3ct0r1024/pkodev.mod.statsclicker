# pkodev.mod.statsclicker

[![logo-background](https://user-images.githubusercontent.com/3164064/163711104-29410e0d-3c86-411a-9319-9ffeaa62abb8.png)](http://pkodev.net "PKOdev.NET")

This [**pkodev.mod.loader**](https://github.com/V3ct0r1024/pkodev.mod.loader) modification for the game client of the MMORPG game "Tales of Pirates" adds the feature to automatically upgrade the characteristics of a player's character by holding the left mouse button on the "**+**" button next to corresponding characteristic on the "**Character**" form.

## Documentation

- Please refer to [this page](https://github.com/V3ct0r1024/pkodev.mod.statsclicker/blob/master/doc/pkodev.mod.statsclicker.doc.en.md) to get information about the modification in **English language**;
- Please refer to [that page](https://github.com/V3ct0r1024/pkodev.mod.statsclicker/blob/master/doc/pkodev.mod.statsclicker.doc.ru.md) to get information about the modification in **Russian language**.

## Information about the modification

-   **Name:**  pkodev.mod.statsclicker;
-   **Version:**  1.0;
-   **Author:**  [V3ct0r](https://github.com/V3ct0r1024);
-   **Type:** for the game client (Game.exe);
-   **Supported executable files (.exe):**  GAME_13X_0, GAME_13X_1, GAME_13X_2, GAME_13X_3, GAME_13X_4, GAME_13X_5.

## How to build

You will need the [**Visual Studio 2022 Community**](https://visualstudio.microsoft.com/vs/community/) IDE installed, which you can download for free from the Microsoft website, and the [**Git**](https://git-scm.com/) VCS.

### Way one - build.bat script

1. Open **Developer Command Prompt for VS 2022**;
2. Execute the following sequence of commands:

	
		git clone https://github.com/V3ct0r1024/pkodev.mod.statsclicker.git
		cd pkodev.mod.statsclicker
		build
       
### Way two - Visual Studio GUI

1. Open **Command Prompt** (cmd.exe);
2. Execute the following sequence of commands:

	
		git clone https://github.com/V3ct0r1024/pkodev.mod.statsclicker.git
		cd pkodev.mod.statsclicker
		start .

3. Double click on the file "**pkodev.mod.statsclicker.sln**". This will launch Visual Studio 2022 Community;
4. Select the desired version of Game.exe in the drop-down list of configurations and click the green arrow to build the modification.

.DLL files of the modification will appear in the directory **pkodev.mod.statsclicker\bin**. You can install them in the client, for example with the following command:

	
	move "Path to the .DLL file" "Path to the client mods directory"

## Gallery

![Image 1](https://raw.githubusercontent.com/V3ct0r1024/pkodev.mod.statsclicker/master/img/0.png)

## Discussion on the forum

- [English section](https://pkodev.net/topic/6971-increasing-the-attributes-of-the-character-by-holding-the-left-mouse-button/)
- [Russian section](https://pkodev.net/topic/6967-%D1%83%D0%BB%D1%83%D1%87%D1%88%D0%B5%D0%BD%D0%B8%D0%B5-%D1%85%D0%B0%D1%80%D0%B0%D0%BA%D1%82%D0%B5%D1%80%D0%B8%D1%81%D1%82%D0%B8%D0%BA-%D0%BF%D0%B5%D1%80%D1%81%D0%BE%D0%BD%D0%B0%D0%B6%D0%B0-%D0%B7%D0%B0%D0%B6%D0%B0%D1%82%D0%B8%D0%B5%D0%BC-%D0%BB%D0%B5%D0%B2%D0%BE%D0%B9-%D0%BA%D0%BD%D0%BE%D0%BF%D0%BA%D0%B8-%D0%BC%D1%8B%D1%88%D0%B8/)

## Download

The latest release of the modification can be found **[here](https://github.com/V3ct0r1024/pkodev.mod.statsclicker/releases/)**.
