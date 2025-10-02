# Libft - École 42

## Description
Libft est le premier projet de l'École 42 et constitue une bibliothèque C personnelle qui regroupe des fonctions essentielles. Cette bibliothèque sera utilisée tout au long du cursus 42 et permet de maîtriser les bases de la programmation en C.

## Objectifs pédagogiques
- Maîtriser les **bases de la programmation** en C
- Comprendre la **gestion mémoire** (malloc/free)
- Implémenter des **algorithmes fondamentaux**
- Respecter la **norme de codage** 42
- Créer une **bibliothèque réutilisable** pour les projets futurs

## Fonctions implémentées

### Partie 1 - Fonctions de la libc

#### Manipulation de caractères
- `ft_isalpha` - Teste si un caractère est alphabétique
- `ft_isdigit` - Teste si un caractère est un chiffre
- `ft_isalnum` - Teste si un caractère est alphanumérique
- `ft_isascii` - Teste si un caractère est ASCII
- `ft_isprint` - Teste si un caractère est imprimable
- `ft_tolower` - Convertit en minuscule
- `ft_toupper` - Convertit en majuscule

#### Manipulation de chaînes
- `ft_strlen` - Calcule la longueur d'une chaîne
- `ft_strchr` - Trouve la première occurrence d'un caractère
- `ft_strrchr` - Trouve la dernière occurrence d'un caractère
- `ft_strncmp` - Compare deux chaînes sur n caractères
- `ft_strnstr` - Trouve une sous-chaîne dans une chaîne
- `ft_strlcpy` - Copie une chaîne de manière sécurisée
- `ft_strlcat` - Concatène des chaînes de manière sécurisée

#### Manipulation de mémoire
- `ft_memset` - Remplit une zone mémoire avec un octet
- `ft_bzero` - Met à zéro une zone mémoire
- `ft_memcpy` - Copie une zone mémoire
- `ft_memmove` - Copie une zone mémoire (gère les chevauchements)
- `ft_memchr` - Trouve un octet dans une zone mémoire
- `ft_memcmp` - Compare deux zones mémoire

#### Conversion et allocation
- `ft_atoi` - Convertit une chaîne en entier
- `ft_calloc` - Alloue et initialise une zone mémoire
- `ft_strdup` - Duplique une chaîne (avec allocation)

### Partie 2 - Fonctions supplémentaires

#### Manipulation de chaînes avancée
- `ft_substr` - Extrait une sous-chaîne
- `ft_strjoin` - Joint deux chaînes
- `ft_strtrim` - Supprime les caractères en début/fin
- `ft_split` - Divise une chaîne selon un délimiteur
- `ft_itoa` - Convertit un entier en chaîne
- `ft_strmapi` - Applique une fonction à chaque caractère
- `ft_striteri` - Applique une fonction à chaque caractère (avec index)

#### Fonctions d'écriture
- `ft_putchar_fd` - Écrit un caractère sur un fd
- `ft_putstr_fd` - Écrit une chaîne sur un fd
- `ft_putendl_fd` - Écrit une chaîne + '\n' sur un fd
- `ft_putnbr_fd` - Écrit un nombre sur un fd

### Bonus - Listes chaînées

#### Structure
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

#### Fonctions de manipulation
- `ft_lstnew` - Crée un nouvel élément
- `ft_lstadd_front` - Ajoute un élément au début
- `ft_lstsize` - Compte les éléments
- `ft_lstlast` - Retourne le dernier élément
- `ft_lstadd_back` - Ajoute un élément à la fin
- `ft_lstdelone` - Supprime un élément
- `ft_lstclear` - Supprime et libère toute la liste
- `ft_lstiter` - Applique une fonction à chaque élément
- `ft_lstmap` - Applique une fonction et crée une nouvelle liste

## Installation et utilisation

### Compilation
```bash
git clone <repository-url>
cd libft
make
```

### Utilisation dans un projet
```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, World!");
    char **split = ft_split(str, ' ');
    
    // Utilisation des fonctions...
    
    free(str);
    // Libérer split...
    return (0);
}
```

### Compilation avec la libft
```bash
gcc -Wall -Wextra -Werror -L. -lft main.c
```

## Structure du projet
```
libft/
├── Makefile              # Compilation et règles
├── libft.h              # Header avec prototypes
├── ft_*.c               # Fonctions principales
├── ft_lst*.c            # Fonctions bonus (listes)
└── README.md            # Documentation
```

## Makefile

### Règles disponibles
- `make` / `make all` - Compile la bibliothèque libft.a
- `make bonus` - Compile avec les fonctions bonus
- `make clean` - Supprime les fichiers .o
- `make fclean` - Supprime tout + libft.a
- `make re` - Recompile entièrement

### Flags de compilation
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
```

## Tests et validation

### Tests recommandés
```bash
# Test basique
make && echo "Compilation OK"

# Test avec main personnalisé
gcc -Wall -Wextra -Werror -L. -lft test_main.c

# Vérification mémoire
valgrind ./a.out
```

### Outils de test tiers
- **libft-unit-test** - Tests automatisés
- **42TESTERS-LIBFT** - Batterie de tests complète
- **libftTester** - Tests avec comparaison libc

## Exemples d'utilisation

### Manipulation de chaînes
```c
#include "libft.h"

int main(void)
{
    char *str = "  Hello, World!  ";
    char *trimmed = ft_strtrim(str, " ");
    char **words = ft_split(trimmed, ',');
    
    printf("Original: '%s'\n", str);
    printf("Trimmed: '%s'\n", trimmed);
    printf("First word: '%s'\n", words[0]);
    
    free(trimmed);
    // Libérer words...
    return (0);
}
```

### Listes chaînées
```c
#include "libft.h"

int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("First")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Third")));
    
    printf("List size: %d\n", ft_lstsize(lst));
    
    ft_lstclear(&lst, free);
    return (0);
}
```

### Conversion et validation
```c
#include "libft.h"

int main(void)
{
    char *input = "42";
    
    if (ft_isdigit(*input))
    {
        int num = ft_atoi(input);
        char *str_num = ft_itoa(num * 2);
        printf("Double: %s\n", str_num);
        free(str_num);
    }
    return (0);
}
```

## Algorithmes et complexités

### Complexités temporelles
| Fonction | Complexité | Description |
|----------|------------|-------------|
| ft_strlen | O(n) | Parcours linéaire |
| ft_strchr | O(n) | Recherche linéaire |
| ft_memcpy | O(n) | Copie octet par octet |
| ft_split | O(n) | Avec allocation multiple |
| ft_lstsize | O(n) | Parcours de liste |

### Optimisations implémentées
- **Protection contre NULL** dans toutes les fonctions
- **Gestion des cas limites** (chaînes vides, etc.)
- **Efficacité mémoire** avec malloc minimal
- **Réutilisation** de fonctions entre elles

## Gestion mémoire

### Stratégies appliquées
- **Vérification systématique** des retours malloc
- **Libération en cas d'échec** partiel
- **Protection contre les double-free**
- **Tests Valgrind** pour validation

### Fonctions d'allocation
```c
// Allocation sécurisée avec vérification
void *ft_calloc(size_t count, size_t size);

// Duplication avec gestion d'erreur
char *ft_strdup(const char *s1);

// Extraction avec allocation
char *ft_substr(char const *s, unsigned int start, size_t len);
```

## Normes et contraintes 42

### Norme de codage respectée
- **25 lignes maximum** par fonction
- **5 fonctions maximum** par fichier
- **Noms de variables** explicites
- **Pas de variables globales**
- **Gestion d'erreurs** obligatoire

### Fonctions interdites
- Aucune fonction de la libc autorisée
- Implémentation from scratch obligatoire
- Tests de conformité avec comportement original

## Extensions possibles

### Fonctions additionnelles utiles
- `ft_realloc` - Réallocation mémoire
- `ft_strstr` - Recherche de sous-chaîne
- `ft_strcmp` - Comparaison complète
- `ft_strcat` - Concaténation simple
- `ft_isspace` - Test caractères blancs

### Structures de données avancées
- **Tableaux dynamiques** (vector-like)
- **Tables de hachage** basiques
- **Arbres binaires** simples

## Compétences développées
- **Programmation C** fondamentale
- **Gestion mémoire** rigoureuse
- **Algorithmes** de base (recherche, tri)
- **Structures de données** (listes chaînées)
- **Debugging** et tests unitaires
- **Conception de bibliothèques** réutilisables
- **Optimisation** de code

## Auteur
Alexandre Pommier (apommier) - École 42

## Licence
Projet académique - École 42