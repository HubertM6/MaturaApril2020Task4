# Luki w ciągu
*Luką* w ciągu liczbwym nazywamy **bezwzględną wartość różnicy między dwoma kolejnymi elementami**.

Przykładowo - w czteroelementowym ciągi `5, 2, 7, 10` są trzy luki:
* luka między pierwszym a drugim elementem wynosi 3
* luka między drugim a trzecim elementem wynosi 5
* luka między trzecim a czwartym elementem wynosi 3

*Największa luka* w tym ciągu ma wartość 5.

W pliku `dane.txt` znajduje się ciąg złożony z 1000 dodatnich liczb całkowitych nie większych od 2 &middot; 10^9. Odpowiedzi zapisz w pliku `wyniki.txt` lub wypisz na standardowe wyjście.

## Zadanie 1
Podaj wartość największej luki oraz wartość najmniejszej luki pomiędzy elementami ciągu z pliku `dane.txt`. Zapisz je **w osobnych wierszach**

## Zadanie 2
Fragment ciągu nazwiemy *regularnym*, jeśli wszystkie jesgo luki mają tę samą wartość.

Znajdź **najdłuższy fragment regularny** w ciągu z pliku `dane.txt`. Wypisz **w osobnych linijkach** jego długość oraz wartości (liczby) znajdujące się na początku i końcu tego fragmenty. W pliku z danymi jest jeden taki fragment.

Przykładowo - w ciągu `4, 11, 4, 1, 4, 7, 11, 12, 13, 14, 7, 0, 3` regularnymi są następujące fragmenty:
* `4, 11, 4` - luka pomiędzy jego elementami wynosi 7
* `4, 1, 4, 7` - luka pomiędzy jego elementami wynosi 3
* `7, 11` - luka pomiędzy jego elementami wnosi 4
* `11, 12, 13, 14` - luka między jego elementami wynosi 1
* `14, 7, 0` - luka między jego elementami wynosi 7
* `0, 3` - luka między jego elementami wynosi 3

W powyższym przykładzie długość najdłuższego fragmentu regularnego jest równa 4. Takie fragmenty w przykładzie są dwa. Jeden zaczyna się od liczby 4 i kończy liczbą 7, a drugi zaczyna się od liczby 11 i kończy liczbą 14.

## Zadanie 3
*Krotnością* luki nazwiemy liczbę jej wystąpień. *Najczęstszą* luką nazywamy lukę o największej krotności.

Przykładowo - w ciągu `5, 2, 7, 10` luka 5 ma krotność 1, luka 3 ma krotność 2 i wobec tego jest najczęstszą luką.

Podaj krotność najczęstszej luki oraz wartości wszystkich najczęstszych luk w ciągu z pliku `dane.txt` **w kolejności rosnącej**. Wszystkie wartości wypisz **w osobnych wierszach**

W przykładzie z zadania 4.2 krotność najczęstszej luki wynosi 4. Tę krotność mają luki 7 i 3.