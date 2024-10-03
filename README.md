# Smart Radar

Projekt na vytvorenie inteligentného radaru pomocou Arduina.

## Úvod

Tento projekt demonštruje, ako pomocou Arduina, ultrazvukového senzora a servomotora vytvoriť jednoduchý radarový systém na detekciu objektov v okolí.

## Ciele projektu

- Naučiť sa pracovať s ultrazvukovým senzorom HC-SR04.
- Ovládať servomotor pomocou Arduina.
- Vizualizovať namerané údaje v reálnom čase.

## Účel projektu

Cieľom projektu je vytvoriť inteligentný radarový systém pomocou Arduina, ktorý dokáže detekovať objekty v okolí, merať ich vzdialenosť a vizualizovať tieto údaje v reálnom čase. Tento systém môže nájsť uplatnenie v rôznych oblastiach, ako je robotika, bezpečnostné systémy či asistenčné technológie.

## Funkcionalita

- **Detekcia objektov:** Použitím ultrazvukového senzora HC-SR04 systém identifikuje prítomnosť objektov v definovanom rozsahu.
- **Meranie vzdialenosti:** Senzor meria vzdialenosť medzi radarom a detegovanými objektmi s vysokou presnosťou.
- **Rotácia senzora:** Servomotor SG90 umožňuje otáčanie ultrazvukového senzora v rozsahu 180°, čo umožňuje skenovanie širšieho priestoru.
- **Vizualizácia dát:** Namerané údaje sú odosielané do počítača, kde sú spracované a zobrazené v reálnom čase pomocou softvéru Processing, čím sa vytvára radarový displej.

## Očakávané výsledky

- **Reálny časový prehľad:** Užívatelia budú môcť sledovať polohu a vzdialenosť objektov v reálnom čase na radarovom displeji.
- **Presné merania:** Systém poskytne presné údaje o vzdialenosti objektov v rozsahu až do 4 metrov.
- **Široký uhol skenovania:** Vďaka rotácii senzora bude radar schopný pokryť uhol 180°, čo umožní monitorovanie veľkej oblasti.

## Štruktúra projektu

- `docs/`: Dokumentácia projektu.
- `hardware/`: Schémy zapojenia a zoznam komponentov.
- `src/`: Zdrojový kód pre Arduino a Processing.
- `media/`: Obrázky a videá hotového zariadenia.
- `links/`: Akékoľvek užitočné zdroje.
