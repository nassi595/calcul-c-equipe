# calcul-c-equipe

## Description
Dépôt collaboratif réalisé dans le cadre du TP Git et GitHub (ENSA Khouribga, IID). Deux étudiants travaillent sur un même projet en langage C en utilisant des branches, une pull request et la résolution de conflits de fusion.

## Rôles
| Rôle | Responsabilité |
|---|---|
| Étudiant A | Propriétaire du dépôt : crée le dépôt, ajoute `main.c`, crée la fonction `moyenne`, fusionne la pull request |
| Étudiant B | Collaborateur : crée la fonction `produit` sur une branche dédiée, ouvre la pull request, provoque et résout un conflit contrôlé |

## Contenu du projet
Le fichier `main.c` contient :
- `produit(int a, int b)` : retourne le produit de deux entiers ;
- `moyenne(int a, int b)` : retourne la moyenne de deux entiers avec une division flottante (`2.0f`) ;
- `main()` : affiche « Projet collaboratif » puis les résultats des deux fonctions.

## Compilation et exécution
```bash
gcc main.c -o calcul
./calcul
```

## Branches et workflow
| Branche | Auteur | Contenu | Intégration |
|---|---|---|---|
| `main` | A et B | Branche principale | — |
| `feature/produit` | B | Fonction `produit` | Pull request #1, fusionnée par A |
| `feature/moyenne` | A | Fonction `moyenne` | Fusion locale dans `main` |
| `feature/message` | B | Modification du message affiché | Fusion en conflit, résolu manuellement |

## Déroulement du travail
1. Création du dépôt avec un README initial, puis clone par A et B.
2. A ajoute `main.c` et publie sur `main` ; B récupère la mise à jour (`fetch` puis `pull`).
3. B crée `feature/produit`, la publie et ouvre la pull request #1 ; A la fusionne.
4. A crée `feature/moyenne` et la fusionne dans `main` ; le push est rejeté car `main` a évolué sur GitHub. A intègre alors les changements distants et résout le conflit en conservant les deux fonctions.
5. Manipulation des branches de démonstration (renommage, suppression).
6. B provoque un conflit sur la première ligne affichée entre `feature/message` et `main`, le résout, puis publie `main`.

## Pull request fusionnée
https://github.com/nassi595/calcul-c-equipe/pull/1

## Auteur
BANDAKLI Nassima — compte GitHub : nassi595
