#include <stdio.h> // Pour les fonctions printf et scanf

// Prototype de la fonction fact (déclaration)
// Prend un entier n en paramètre et retourne son factoriel (un entier)
int fact(int n);

int main() {
  int n = 0; // Variable pour stocker le nombre saisi par l'utilisateur
  
  // Demande à l'utilisateur de saisir un nombre
  printf("choisissez 1 nombre pour connaitre sont factorielle\n");
  
  // Lecture de la saisie utilisateur. Le symbole '&' permet de passer 
  // l'adresse de la variable 'n' pour que scanf puisse modifier sa valeur.
  scanf("%d", &n);

  // Calcul et affichage du résultat en appelant la fonction récursive fact(n)
  printf("le factorielle de %d est %d\n", n, fact(n));

  return 0;
}

// Définition de la fonction factorielle (implémentation récursive)
int fact(int n) {
  // Cas de base (condition d'arrêt de la récursion) :
  // Le factoriel de 0 ou 1 vaut 1. Cela empêche la fonction de s'appeler indéfiniment.
  if (n <= 1) {
    return 1;
  }
  
  // Étape récursive :
  // La fonction s'appelle elle-même avec (n - 1)
  // n! = n * (n - 1)!
  return n * fact(n - 1);
}
