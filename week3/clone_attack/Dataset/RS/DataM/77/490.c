void  KwX9d4 (char AZzasgpDSbY7 [], int l) {
    {
        int i = (970 - 970);
        while (i <= l) {
            if (AZzasgpDSbY7[i] == AZzasgpDSbY7[(747 - 747)]) {
                int j = i + (458 - 457);
                while (j <= l) {
                    if (AZzasgpDSbY7[j] == AZzasgpDSbY7[(358 - 358)])
                        break;
                    else if (AZzasgpDSbY7[j] != AZzasgpDSbY7[(656 - 656)] && AZzasgpDSbY7[j] != '\0') {
                        AZzasgpDSbY7[i] = AZzasgpDSbY7[j] = '\0';
                        KwX9d4 (AZzasgpDSbY7, l);
                        cout << i << " " << j << endl;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    return;
}

int main () {
    char AZzasgpDSbY7 [(327 - 226)];
    cin.getline (AZzasgpDSbY7, (717 - 616));
    KwX9d4 (AZzasgpDSbY7, strlen (AZzasgpDSbY7));
    return 0;
}

