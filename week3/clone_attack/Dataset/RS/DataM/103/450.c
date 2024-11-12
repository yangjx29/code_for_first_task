int main () {
    int yhn74Ce = 0;
    char charCurrent;
    char charNext;
    char nCxgfRJvD [1000];
    scanf ("%s", nCxgfRJvD);
    charCurrent = charNext = toupper (nCxgfRJvD[(190 - 190)]);
    {
        int i = 0;
        while (nCxgfRJvD[i] != '\0') {
            charCurrent = toupper (nCxgfRJvD[i]);
            if (nCxgfRJvD[i + (271 - 270)] == '\0') {
                if (charCurrent == charNext)
                    yhn74Ce = yhn74Ce + 1;
                break;
            }
            charNext = toupper (nCxgfRJvD[i + 1]);
            if (toupper (nCxgfRJvD[i + 1]) == toupper (nCxgfRJvD[i])) {
                yhn74Ce++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                printf ("(%c,%d)", charCurrent, yhn74Ce + 1);
                yhn74Ce = 0;
            }
            i++;
        };
    }
    printf ("(%c,%d)", charCurrent, yhn74Ce);
    return 0;
}

