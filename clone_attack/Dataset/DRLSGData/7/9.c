void  main () {
    int length1, length2, length3, i, j, temp;
    char nRwn5C0YDhO [(803 - 547)], string2 [(487 - 231)], string3 [(768 - 512)];
    scanf ("%s", nRwn5C0YDhO);
    scanf ("%s", string2);
    length1 = strlen (nRwn5C0YDhO);
    length2 = strlen (string2);
    scanf ("%s", string3);
    length3 = strlen (string3);
    {
        i = (136 - 136);
        for (; i <= (length1 - length2);) {
            if (nRwn5C0YDhO[i] == string2[(485 - 485)]) {
                temp = i + (872 - 871);
                j = (709 - 708);
                for (; j < length2 && nRwn5C0YDhO[temp] == string2[j];) {
                    j++;
                    temp = temp + 1;
                }
                if (j == length2) {
                    strcpy (string2, nRwn5C0YDhO + temp);
                    strcpy (nRwn5C0YDhO + i, string3);
                    strcpy (nRwn5C0YDhO + i + length3, string2);
                    break;
                }
            }
            i++;
        }
    }
    printf ("%s\n", nRwn5C0YDhO);
}

