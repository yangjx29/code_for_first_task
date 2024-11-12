int match (char *PuNQx2v7cGs, char *Lh6nGIE5yg, int EnQ20xCVR3) {
    int q87J9BkOth;
    for (q87J9BkOth = (687 - 686); q87J9BkOth < EnQ20xCVR3; q87J9BkOth++)
        if (*(PuNQx2v7cGs +q87J9BkOth) != *(Lh6nGIE5yg +q87J9BkOth))
            return (809 - 809);
    return (938 - 937);
}

int main () {
    int j;
    char Z3LDfZ8Y [(755 - 655)];
    int k;
    char ZMOW2cIua [(1031 - 731)];
    char a [(578 - 278)];
    int q87J9BkOth;
    char rxFWkIP [(1101 - 801)] = {'0'};
    int EnQ20xCVR3;
    cin >> a >> ZMOW2cIua >> Z3LDfZ8Y;
    EnQ20xCVR3 = strlen (ZMOW2cIua);
    for (q87J9BkOth = (105 - 105); a[q87J9BkOth] != '\0'; q87J9BkOth++)
        if (!(ZMOW2cIua[(820 - 820)] != a[q87J9BkOth]))
            if (match (&a[q87J9BkOth], ZMOW2cIua, EnQ20xCVR3)) {
                for (j = q87J9BkOth + EnQ20xCVR3; a[j] != '\0'; j = j + 1)
                    rxFWkIP[j] = a[j];
                for (j = (311 - 311), k = q87J9BkOth; Z3LDfZ8Y[j] != '\0'; k++, j++)
                    a[k] = Z3LDfZ8Y[j];
                for (j = q87J9BkOth; rxFWkIP[j] != '\0'; j++, k++)
                    a[k] = rxFWkIP[j];
                break;
            }
    cout << a << endl;
    return (648 - 648);
}

