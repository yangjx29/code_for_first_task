int main () {
    int i;
    int apXJ1yKqS4RD;
    int mL10vD4F;
    char nsl9NLM0B [256], cZ5IxWjdPRw;
    scanf ("%d", &mL10vD4F);
    {
        i = 1;
        while (i <= mL10vD4F) {
            scanf ("%s", &nsl9NLM0B);
            {
                apXJ1yKqS4RD = 0;
                while (apXJ1yKqS4RD < strlen (nsl9NLM0B)) {
                    switch (nsl9NLM0B[apXJ1yKqS4RD]) {
                    case 'A' :
                        cZ5IxWjdPRw = 'T';
                        break;
                    case 'T' :
                        cZ5IxWjdPRw = 'A';
                        break;
                    case 'C' :
                        cZ5IxWjdPRw = 'G';
                        break;
                    case 'G' :
                        cZ5IxWjdPRw = 'C';
                        break;
                    }
                    apXJ1yKqS4RD = apXJ1yKqS4RD + 1;
                    printf ("%c", cZ5IxWjdPRw);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

