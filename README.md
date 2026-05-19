<div align="center" class="text-center">
  <h1>42-Pool</h1>
  
  <img alt="last-commit" src="https://img.shields.io/github/last-commit/socallmebertille/42-Pool?style=flat&amp;logo=git&amp;logoColor=white&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="repo-top-language" src="https://img.shields.io/github/languages/top/socallmebertille/42-Pool?style=flat&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="repo-language-count" src="https://img.shields.io/github/languages/count/socallmebertille/42-Pool?style=flat&amp;color=0080ff" class="inline-block mx-1" style="margin: 0px 2px;">
  <p><em>Built with the tools and technologies:</em></p>
  <img alt="Markdown" src="https://img.shields.io/badge/Markdown-000000.svg?style=flat&amp;logo=Markdown&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="GNU%20Bash" src="https://img.shields.io/badge/GNU%20Bash-4EAA25.svg?style=flat&amp;logo=GNU-Bash&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
  <img alt="C" src="https://img.shields.io/badge/Language-2496ED.svg?style=flat&amp;logo=c&amp;logoColor=white" class="inline-block mx-1" style="margin: 0px 2px;">
</div>

<h2>Table of Contents</h2>
<ul class="list-disc pl-4 my-0">
  <li class="my-0"><a href="#guides-par-module">Guides par Module</a></li>
  <li class="my-0"><a href="#overview">Overview</a></li>
  <ul class="list-disc pl-4 my-0">
    <li class="my-0"><a href="#few-shell-notions">Few Shell notions</a></li>
  </ul>
</ul>

<h2>Guides par Module</h2>

| Module | Focus | Exercices clés |
|---|---|---|
| Shell_00 | Commandes de base, permissions, archivage | `z`, `testShell00.tar`, `exo2.tar`, `id_rsa_pub`, `midLS`, `git_commit.sh` |
| Shell_01 | Recherche de fichiers, variables d’environnement, scripts utilitaires | `print_groups.sh`, `find_sh.sh`, `count_files.sh`, `MAC.sh` |
| C_00 | Premiers pas en C: affichage et boucles | `ft_putchar`, alphabet, nombres, combinaisons |
| C_01 | Pointeurs, tableaux et fonctions utilitaires | `ft_swap`, `ft_div_mod`, `ft_strlen`, tri de tableaux |
| C_02 | Manipulation de chaînes | `ft_strcpy`, vérifications alpha/numériques, `ft_strcapitalize`, `ft_strlcpy` |
| C_03 | Concaténation et recherche dans les chaînes | `ft_strcmp`, `ft_strcat`, `ft_strstr`, `ft_strlcat` |
| C_04 | Conversions et affichage de données | `ft_strlen`, `ft_putnbr`, `ft_atoi`, `ft_putnbr_base` |
| C_05 | Récursivité et maths | factorielle, puissances, fibonacci, nombres premiers |
| C_06 | Arguments du `main` | affichage, inversion et tri de paramètres |
| C_07 | Allocation dynamique et découpage | `ft_strdup`, `ft_range`, `ft_strjoin`, `ft_split`, conversion de base |
| C_08 | Headers, macros et structures | `ft.h`, `ft_boolean.h`, `ft_abs.h`, `ft_point.h`, `ft_strs_to_tab` |

<h2>Overview</h2>

Ce dépôt regroupe les exercices de la Piscine 42, classés par journées Shell et modules C.
L’objectif est de garder une trace claire des notions fondamentales: scripting Unix, manipulation mémoire, chaînes, récursivité et structures.
Chaque dossier `exXX` correspond à un exercice autonome orienté pratique.

<h3>Few Shell notions</h3>

| Notion | Commande type | Utilité |
|---|---|---|
| Groupes utilisateur | `id -Gn "$FT_USER" \| tr " " ","` | Récupérer et formatter les groupes d’un user |
| Recherche de fichiers | `find -type f -name "*.sh"` | Cibler un type de fichier dans l’arborescence |
| Comptage | `find . \| wc -l` | Mesurer rapidement le volume de fichiers/entrées |
| Extraction | `ifconfig \| grep ether \| awk '{print $2}'` | Filtrer puis extraire une information réseau |
| Historique Git | `git log --format="%H" -5` | Lister les derniers commits en SHA |
