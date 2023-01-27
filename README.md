# 2023_Analysis_fire-and-water

U ovom repozitorijumu biće predstavljen praktični seminarski rad u okviru kursa Verifikacija Softvera. Seminarski rad je samostalnog tipa i svodi se na primjenu alata za verifikaciju softvera na već postojeći projekat otvorenog koda.

## Opis projekta

Projekat Fire and Water predstavlja jednu implementaciju popularne istoimene igrice. Igrica prati dva glavna igrača waterGirl i fireBoy čiji je cilj da sakupe što više dijamanata i da, izbjegavajući prepreke, stignu do cilja. <br />
Analizirani projekat se nalazi na adresi: https://gitlab.com/matf-bg-ac-rs/course-rs/projects-2022-2023/08-fire-and-water <br />
Primjena alata će biti izvršena na main grani, nad komitom čiji je heš kod: d60da1e537620c22e79a23ad0c8573299d8befa7

## Spisak korišćenih alata:
- Valgrind
   - Memcheck
   - Cachegrind
- Perf
- Clang-Tidy i Clazy
- Clangd

## Spisak pronađenih grešaka:
- curenje memorije
- nekonzistentnost u pisanju koda
- višak koda 
