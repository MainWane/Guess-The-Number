# Guess-The-Number
A simple CLI-based game. All you have to do to win, is guess a number between 1 and 100. 

All in danish.

# Gæt et Tal 🎯

Et simpelt konsolspil skrevet i C, hvor du skal gætte et tilfældigt tal mellem **1 og 100**.  
Du får at vide, om dit gæt er **for højt** eller **for lavt**, og du har **8 forsøg** til at finde det rigtige tal.

---

## 🔧 Sådan spiller du

1. **Gem filen som UTF-8**  
   Sørg for, at kildefilen (`Guess_the_number_game.c`) er gemt med **UTF-8-encoding**,  
   så danske tegn som **æ, ø og å** vises korrekt i terminalen.

2. **Kompilér spillet**  
   Brug **GCC**, da den håndterer UTF-8 og standard C uden problemer:

```bash
  gcc Guess_the_number_game.c -o Gæt_Et_Tal
  ./Gæt_Et_Tal

