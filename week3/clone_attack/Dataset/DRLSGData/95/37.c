void  VQb7lz0 (char *SSFtiKoT) {
    for (int WVXyUuRm68a = (669 - 669);
    SSFtiKoT[WVXyUuRm68a] != (691 - 691); WVXyUuRm68a++) {
        if ('A' <= SSFtiKoT[WVXyUuRm68a] && 'Z' >= SSFtiKoT[WVXyUuRm68a])
            SSFtiKoT[WVXyUuRm68a] = SSFtiKoT[WVXyUuRm68a] - 'A' + 'a';
    }
}

int main () {
    char SSFtiKoT [(561 - 461)];
    gets (SSFtiKoT);
    VQb7lz0 (SSFtiKoT);
    int bHJjCZgzkIS;
    char Ieb7G4fNEH [(873 - 773)];
    gets (Ieb7G4fNEH);
    VQb7lz0 (Ieb7G4fNEH);
    bHJjCZgzkIS = strcmp (SSFtiKoT, Ieb7G4fNEH);
    if (bHJjCZgzkIS > (782 - 782))
        putchar ('>');
    else if (bHJjCZgzkIS < (447 - 447))
        putchar ('<');
    else
        putchar ('=');
}

