### Introduction

**C** est un [langage de programmation](https://fr.wikipedia.org/wiki/Langage_de_programmation "Langage de programmation") [impératif](https://fr.wikipedia.org/wiki/Programmation_imp%C3%A9rative "Programmation impérative"), généraliste et de [bas niveau](https://fr.wikipedia.org/wiki/Langage_de_programmation_de_bas_niveau "Langage de programmation de bas niveau"). Inventé au début des [années 1970](https://fr.wikipedia.org/wiki/Ann%C3%A9es_1970 "Années 1970") pour réécrire [Unix](https://fr.wikipedia.org/wiki/Unix "Unix"), C'est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme [C++](https://fr.wikipedia.org/wiki/C%2B%2B "C++"), [C#](https://fr.wikipedia.org/wiki/C_sharp "C sharp"), [Java](https://fr.wikipedia.org/wiki/Java_(langage) "Java (langage)") et [PHP](https://fr.wikipedia.org/wiki/PHP "PHP") ou [JavaScript](https://fr.wikipedia.org/wiki/JavaScript "JavaScript") ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au [développeur](https://fr.wikipedia.org/wiki/D%C3%A9veloppeur "Développeur") une marge de contrôle importante sur la machine (notamment sur la [gestion de la mémoire](https://fr.wikipedia.org/wiki/Gestion_de_la_m%C3%A9moire "Gestion de la mémoire")) et est de ce fait utilisé pour réaliser les « fondations » ([compilateurs](https://fr.wikipedia.org/wiki/Compilateur "Compilateur"), [interpréteurs](https://fr.wikipedia.org/wiki/Interpr%C3%A8te_(informatique) "Interprète (informatique)"), …) de ces langages plus modernes. Il permet de gérer en couche base chaque éléments du code, les allocation mémoire, et plein d'autre choses

### Les syntaxe de base

```c
#include <stdio.h>
int main(){
	printf("text")
}
```
Le `stdio.h` est une librairie qui permet de mieux gérer le texte. Cette structure est la minimum


### Affiche une valeurs numérique 

```c
#include <stdio.h>
int main()
{
	printf("%d\n" , 111)
}
// Pour afficher sur une même ligne on retire le \n 
```
> 111%d

Le `printf` remplace le `%d` au sein de ce texte par le nombre donné juste après. Elle obtient donc le texte `"111\n"`, qui est affiché.

### Déclaration de variables

```c
int distance = 150;

int natation = 2, cyclisme = 34, cap = 6;
int add = natation + cyclisme + cap;
// Pour assigné une nouvelle valeur à une variable
natation = natation + 2;
```



