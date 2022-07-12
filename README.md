# Моноширинные шрифты для m5stack (RUS/ENG)
В программе "GFX Font Creator", предназначенной для генерации шрифтов под m5stack, к сожалению нет возможности сгенерировать моноширинный шрифт.

Даже если вы скачали моноширинный шрифт в интернете, то в результате работы этой программы далеко не все символы получатся моноширинными.<br>*Например точка, двоеточие, пробел и т. п.*

Ссылка на программу: https://github.com/m5stack/FontCreator

Что надо сделать для того чтобы шрифт стал полностью моноширинным:

1. Скачиваем в интернете любой бесплатный моноширинный шрифт.
2. Устанавливаем его на ваш ПК
3. Выбираем его в программе "GFX Font Creator".<br>Я делал так: <br><img src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/GFXFontCreator.png?raw=true">
4. Нажимаем кнопку "Generate".
5. Открываем сгенерированный файл с расширением ".h" и в массиве "GFXglyph" вычисляем максимальное значение в четвертом столбце.
6. Меняем все значения четвертого столбца на максимальное.
7. Готово.

Так же программка "GFX Font Creator" не всегда корректно генерирует некоторые символы, такие как "+,-.:;=".<br>Вот тут уже мне пришлось редактировать символы вручную...

В массиве "uint8_t" каждый символ подписан.<br>Вот пример:
| Код    | Символ |
| ------ | :----: |
| 0x002B | +      |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x003A | :      |
| 0x003B | ;      |
| 0x003D | =      |

В этом массиве код "0xFF" - означает полное заполение, а "0x00" наоборот - пустота.

В результате я сгенерировал два шрифта:
<details><summary>PTMono - это полностью моноширинный шрифт (поддерживаемые символы под спойлером)</summary>
  
| Код    | Символ |
| ------ | :----: |
| 0x0020 |        |
| 0x0021 | !      |
| 0x0022 | "      |
| 0x0023 | #      |
| 0x0024 | $      |
| 0x0025 | %      |
| 0x0026 | &      |
| 0x0027 | '      |
| 0x0028 | (      |
| 0x0029 | )      |
| 0x002A | *      |
| 0x002B | +      |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x002F | /      |
| 0x0030 | 0      |
| 0x0031 | 1      |
| 0x0032 | 2      |
| 0x0033 | 3      |
| 0x0034 | 4      |
| 0x0035 | 5      |
| 0x0036 | 6      |
| 0x0037 | 7      |
| 0x0038 | 8      |
| 0x0039 | 9      |
| 0x003A | :      |
| 0x003B | ;      |
| 0x003C | <      |
| 0x003D | =      |
| 0x003E | >      |
| 0x003F | ?      |
| 0x0040 | @      |
| 0x0041 | A      |
| 0x0042 | B      |
| 0x0043 | C      |
| 0x0044 | D      |
| 0x0045 | E      |
| 0x0046 | F      |
| 0x0047 | G      |
| 0x0048 | H      |
| 0x0049 | I      |
| 0x004A | J      |
| 0x004B | K      |
| 0x004C | L      |
| 0x004D | M      |
| 0x004E | N      |
| 0x004F | O      |
| 0x0050 | P      |
| 0x0051 | Q      |
| 0x0052 | R      |
| 0x0053 | S      |
| 0x0054 | T      |
| 0x0055 | U      |
| 0x0056 | V      |
| 0x0057 | W      |
| 0x0058 | X      |
| 0x0059 | Y      |
| 0x005A | Z      |
| 0x005B | [      |
| 0x005C | \      |
| 0x005D | ]      |
| 0x005E | ^      |
| 0x005F | _      |
| 0x0060 | `      |
| 0x0061 | a      |
| 0x0062 | b      |
| 0x0063 | c      |
| 0x0064 | d      |
| 0x0065 | e      |
| 0x0066 | f      |
| 0x0067 | g      |
| 0x0068 | h      |
| 0x0069 | i      |
| 0x006A | j      |
| 0x006B | k      |
| 0x006C | l      |
| 0x006D | m      |
| 0x006E | n      |
| 0x006F | o      |
| 0x0070 | p      |
| 0x0071 | q      |
| 0x0072 | r      |
| 0x0073 | s      |
| 0x0074 | t      |
| 0x0075 | u      |
| 0x0076 | v      |
| 0x0077 | w      |
| 0x0078 | x      |
| 0x0079 | y      |
| 0x007A | z      |
| 0x007B | {      |
| 0x007C | |      |
| 0x007D | }      |
| 0x007E | ~      |
| 0x00A1 | ¡      |
| 0x00A2 | ¢      |
| 0x00A3 | £      |
| 0x00A4 | ¤      |
| 0x00A5 | ¥      |
| 0x00A6 | ¦      |
| 0x00A7 | §      |
| 0x00A8 | ¨      |
| 0x00A9 | ©      |
| 0x00AA | ª      |
| 0x00AB | «      |
| 0x00AC | ¬      |
| 0x00AD | ­      |
| 0x00AE | ®      |
| 0x00AF | ¯      |
| 0x00B0 | °      |
| 0x00B1 | ±      |
| 0x00B2 | ²      |
| 0x00B3 | ³      |
| 0x00B4 | ´      |
| 0x00B5 | µ      |
| 0x00B6 | ¶      |
| 0x00B7 | ·      |
| 0x00B8 | ¸      |
| 0x00B9 | ¹      |
| 0x00BA | º      |
| 0x00BB | »      |
| 0x00BC | ¼      |
| 0x00BD | ½      |
| 0x00BE | ¾      |
| 0x00BF | ¿      |
| 0x0401 | Ё      |
| 0x0410 | А      |
| 0x0411 | Б      |
| 0x0412 | В      |
| 0x0413 | Г      |
| 0x0414 | Д      |
| 0x0415 | Е      |
| 0x0416 | Ж      |
| 0x0417 | З      |
| 0x0418 | И      |
| 0x0419 | Й      |
| 0x041A | К      |
| 0x041B | Л      |
| 0x041C | М      |
| 0x041D | Н      |
| 0x041E | О      |
| 0x041F | П      |
| 0x0420 | Р      |
| 0x0421 | С      |
| 0x0422 | Т      |
| 0x0423 | У      |
| 0x0424 | Ф      |
| 0x0425 | Х      |
| 0x0426 | Ц      |
| 0x0427 | Ч      |
| 0x0428 | Ш      |
| 0x0429 | Щ      |
| 0x042A | Ъ      |
| 0x042B | Ы      |
| 0x042C | Ь      |
| 0x042D | Э      |
| 0x042E | Ю      |
| 0x042F | Я      |
| 0x0430 | а      |
| 0x0431 | б      |
| 0x0432 | в      |
| 0x0433 | г      |
| 0x0434 | д      |
| 0x0435 | е      |
| 0x0436 | ж      |
| 0x0437 | з      |
| 0x0438 | и      |
| 0x0439 | й      |
| 0x043A | к      |
| 0x043B | л      |
| 0x043C | м      |
| 0x043D | н      |
| 0x043E | о      |
| 0x043F | п      |
| 0x0440 | р      |
| 0x0441 | с      |
| 0x0442 | т      |
| 0x0443 | у      |
| 0x0444 | ф      |
| 0x0445 | х      |
| 0x0446 | ц      |
| 0x0447 | ч      |
| 0x0448 | ш      |
| 0x0449 | щ      |
| 0x044A | ъ      |
| 0x044B | ы      |
| 0x044C | ь      |
| 0x044D | э      |
| 0x044E | ю      |
| 0x044F | я      |
| 0x0451 | ё      |
  
</details>
<details><summary>DSEG7Classic - тут моноширинные только цифры (поддерживаемые символы под спойлером)</summary>

| Код    | Символ |
| ------ | :----: |
| 0x002B | +      |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x0030 | 0      |
| 0x0031 | 1      |
| 0x0032 | 2      |
| 0x0033 | 3      |
| 0x0034 | 4      |
| 0x0035 | 5      |
| 0x0036 | 6      |
| 0x0037 | 7      |
| 0x0038 | 8      |
| 0x0039 | 9      |
| 0x003A | :      |
  
</details>

Пример:<br>
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/001.jpg?raw=true">
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/002.jpg?raw=true">
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/003.jpg?raw=true">


# Monospace fonts for m5stack (RUS/ENG)
In the program "GFX Font Creator", designed to generate fonts for m5stack, unfortunately there is no way to generate a monospaced font.

Even if you downloaded a monospaced font on the Internet, as a result of this program, not all characters will turn out to be monospaced.<br>*For example, dot, colon, space, etc.*
  
Link to the program: https://github.com/m5stack/FontCreator

What should be done to make the font completely monospaced:

1. Download any free monospaced font on the Internet.
2. Install it on your PC
3. Select it in the program "GFX Font Creator".<br>I did this: <br><img src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/GFXFontCreator.png?raw=true" >
4. Click the "Generate" button.
5. Open the generated file with the extension ".h" and in the array "GFXglyph" calculate the maximum value in the fourth column.
6. We change all the values of the fourth column to the maximum.
7. Done.
  
Also, the program "GFX Font Creator" does not always correctly generate some characters, such as "+,-.:;=".<br>Here I already had to edit the symbols manually...

In the "uint8_t" array, each character is signed.<br>Here is an example:
| Code   | Symbol |
| ------ | :----: |
| 0x002B | + |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x003A | :      |
| 0x003B | ;      |
| 0x003D | =      |
  
In this array, the code "0xFF" means full filling, and "0x00" on the contrary means emptiness.

As a result, I generated two fonts:
<details><summary>PTMono is a fully monospaced font (supported characters under the spoiler)</summary>

| Code   | Symbol |
| ------ | :----: |
| 0x0020 |        |
| 0x0021 | !      |
| 0x0022 | "      |
| 0x0023 | #      |
| 0x0024 | $      |
| 0x0025 | %      |
| 0x0026 | &      |
| 0x0027 | '      |
| 0x0028 | (      |
| 0x0029 | )      |
| 0x002A | *      |
| 0x002B | +      |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x002F | /      |
| 0x0030 | 0      |
| 0x0031 | 1      |
| 0x0032 | 2      |
| 0x0033 | 3      |
| 0x0034 | 4      |
| 0x0035 | 5      |
| 0x0036 | 6      |
| 0x0037 | 7      |
| 0x0038 | 8      |
| 0x0039 | 9      |
| 0x003A | :      |
| 0x003B | ;      |
| 0x003C | <      |
| 0x003D | =      |
| 0x003E | >      |
| 0x003F | ?      |
| 0x0040 | @      |
| 0x0041 | A      |
| 0x0042 | B      |
| 0x0043 | C      |
| 0x0044 | D      |
| 0x0045 | E      |
| 0x0046 | F      |
| 0x0047 | G      |
| 0x0048 | H      |
| 0x0049 | I      |
| 0x004A | J      |
| 0x004B | K      |
| 0x004C | L      |
| 0x004D | M      |
| 0x004E | N      |
| 0x004F | O      |
| 0x0050 | P      |
| 0x0051 | Q      |
| 0x0052 | R      |
| 0x0053 | S      |
| 0x0054 | T      |
| 0x0055 | U      |
| 0x0056 | V      |
| 0x0057 | W      |
| 0x0058 | X      |
| 0x0059 | Y      |
| 0x005A | Z      |
| 0x005B | [      |
| 0x005C | \      |
| 0x005D | ]      |
| 0x005E | ^      |
| 0x005F | _      |
| 0x0060 | `      |
| 0x0061 | a      |
| 0x0062 | b      |
| 0x0063 | c      |
| 0x0064 | d      |
| 0x0065 | e      |
| 0x0066 | f      |
| 0x0067 | g      |
| 0x0068 | h      |
| 0x0069 | i      |
| 0x006A | j      |
| 0x006B | k      |
| 0x006C | l      |
| 0x006D | m      |
| 0x006E | n      |
| 0x006F | o      |
| 0x0070 | p      |
| 0x0071 | q      |
| 0x0072 | r      |
| 0x0073 | s      |
| 0x0074 | t      |
| 0x0075 | u      |
| 0x0076 | v      |
| 0x0077 | w      |
| 0x0078 | x      |
| 0x0079 | y      |
| 0x007A | z      |
| 0x007B | {      |
| 0x007C | |      |
| 0x007D | }      |
| 0x007E | ~      |
| 0x00A1 | ¡      |
| 0x00A2 | ¢      |
| 0x00A3 | £      |
| 0x00A4 | ¤      |
| 0x00A5 | ¥      |
| 0x00A6 | ¦      |
| 0x00A7 | §      |
| 0x00A8 | ¨      |
| 0x00A9 | ©      |
| 0x00AA | ª      |
| 0x00AB | «      |
| 0x00AC | ¬      |
| 0x00AD | ­      |
| 0x00AE | ®      |
| 0x00AF | ¯      |
| 0x00B0 | °      |
| 0x00B1 | ±      |
| 0x00B2 | ²      |
| 0x00B3 | ³      |
| 0x00B4 | ´      |
| 0x00B5 | µ      |
| 0x00B6 | ¶      |
| 0x00B7 | ·      |
| 0x00B8 | ¸      |
| 0x00B9 | ¹      |
| 0x00BA | º      |
| 0x00BB | »      |
| 0x00BC | ¼      |
| 0x00BD | ½      |
| 0x00BE | ¾      |
| 0x00BF | ¿      |
| 0x0401 | Ё      |
| 0x0410 | А      |
| 0x0411 | Б      |
| 0x0412 | В      |
| 0x0413 | Г      |
| 0x0414 | Д      |
| 0x0415 | Е      |
| 0x0416 | Ж      |
| 0x0417 | З      |
| 0x0418 | И      |
| 0x0419 | Й      |
| 0x041A | К      |
| 0x041B | Л      |
| 0x041C | М      |
| 0x041D | Н      |
| 0x041E | О      |
| 0x041F | П      |
| 0x0420 | Р      |
| 0x0421 | С      |
| 0x0422 | Т      |
| 0x0423 | У      |
| 0x0424 | Ф      |
| 0x0425 | Х      |
| 0x0426 | Ц      |
| 0x0427 | Ч      |
| 0x0428 | Ш      |
| 0x0429 | Щ      |
| 0x042A | Ъ      |
| 0x042B | Ы      |
| 0x042C | Ь      |
| 0x042D | Э      |
| 0x042E | Ю      |
| 0x042F | Я      |
| 0x0430 | а      |
| 0x0431 | б      |
| 0x0432 | в      |
| 0x0433 | г      |
| 0x0434 | д      |
| 0x0435 | е      |
| 0x0436 | ж      |
| 0x0437 | з      |
| 0x0438 | и      |
| 0x0439 | й      |
| 0x043A | к      |
| 0x043B | л      |
| 0x043C | м      |
| 0x043D | н      |
| 0x043E | о      |
| 0x043F | п      |
| 0x0440 | р      |
| 0x0441 | с      |
| 0x0442 | т      |
| 0x0443 | у      |
| 0x0444 | ф      |
| 0x0445 | х      |
| 0x0446 | ц      |
| 0x0447 | ч      |
| 0x0448 | ш      |
| 0x0449 | щ      |
| 0x044A | ъ      |
| 0x044B | ы      |
| 0x044C | ь      |
| 0x044D | э      |
| 0x044E | ю      |
| 0x044F | я      |
| 0x0451 | ё      |
  
</details>
<details><summary>DSEG7Classic - only numbers are monospaced here (supported characters under the spoiler)</summary>

| Code   | Symbol |
| ------ | :----: |
| 0x002B | +      |
| 0x002C | ,      |
| 0x002D | -      |
| 0x002E | .      |
| 0x0030 | 0      |
| 0x0031 | 1      |
| 0x0032 | 2      |
| 0x0033 | 3      |
| 0x0034 | 4      |
| 0x0035 | 5      |
| 0x0036 | 6      |
| 0x0037 | 7      |
| 0x0038 | 8      |
| 0x0039 | 9      |
| 0x003A | :      |
  
</details>
  
Example:<br>
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/001.jpg?raw=true">
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/002.jpg?raw=true">
<img width="300" src="https://github.com/tixset/m5stack_monospace_fonts/blob/main/screenshots/003.jpg?raw=true">
