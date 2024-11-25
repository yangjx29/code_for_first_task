int main () {
    char JM2DANVs0 [(124 - 24)];
    char vR8bAmY0l [(508 - 408)];
    char hkbjil8q [(661 - 561)];
    char *F1xu2KT = NULL;
    char *eepVzL1f58qu = NULL;
    cin >> JM2DANVs0 >> vR8bAmY0l >> hkbjil8q;
    F1xu2KT = strstr (JM2DANVs0, vR8bAmY0l);
    if (F1xu2KT != NULL) {
        eepVzL1f58qu = F1xu2KT +strlen (vR8bAmY0l);
        *F1xu2KT = '\0';
        strcat (hkbjil8q, eepVzL1f58qu);
        strcat (JM2DANVs0, hkbjil8q);
    }
    cout << JM2DANVs0;
    return (987 - 987);
}

