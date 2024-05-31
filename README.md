**Ši programa:** 
1) Suskaičiuoja kiek kartų pasikartoja žodžiai tekste
2) Suranda, kuriuose eilutėse žodžiai yra
3) Išrenka URL adresus iš teksto, nepriklausomai nuo jų formato, pvz.: https://www.*******.com, ar www.******.com

Šioje programoje naudojami asociatyvūs konteineriai **std::map** bei **std::set**.

# **std::map** 
Naudojama žodžių pasikartojimų saugojimui. Šis konteineris leidžia efektyviai kiekvieną žodį susieti su jo pasikartojimų skaičiumi. Šioje programoje kiekvienas raktas yra žodis, o jo pasikartojimų skaičius - reikšmė.
Taip pat, **std::map** konteineriai automatiškai išrušiuoja žodžius.

# **std::set**
Saugo unikalius eilučių numerius, kuriuose pasikartoja žodžiai, konteineris užtikrina, kad eilutės numeris bus saugomas tik vieną kartą. Taip pat, šie konteineriai saugo ir URL adresus, jie padeda užtikrinti, 
kad kiekvienas URL adresas bus saugomas tik vieną kartą bei leidžia greitai patikrinti ar URL adresas jau yra rinkinyje.

# Naudojimo instrukcija
1) Parsisiųskite Egzaminas.zip failą
2) Parsisiųstą failą išskleiskite (Extract)
3) Atidarius išskleistą aplanką "Egzaminas" paleisti **run.bat** failą. (Jei atsiras pranešimas apie įtartiną failą, paspauskite mygtuką **"More info"** ir tada **"Run anyway"** mygtuką apačioje)
4) Paleidus **run.bat** failą atsidarys terminalas, kuriame bus parašyta, jog programa suveikė.
5) Aplanke *Egzaminas* atsiras aplankas *Debug*, ten bus programos sugeneruoti failai **"URLs.txt"** (Išrinkti URL adresai), **"WordCount.txt"**(Suskaičiuoti žodžiai tekste), **"CrossReference.txt"**(Eilutės, kuriuose pasikartoja žodžiai)
6) Norint pakeisti tekstą, su kuria vykdoma programa, reikia *Debug* aplanke pakeisti *input.txt* failo turinį. (Prieš paleidžiant programą, *input.txt* failas bus pagrindiniame aplanke)

