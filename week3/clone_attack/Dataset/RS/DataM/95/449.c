int main () {
    char char1 [(802 - 702)];
    char RNAOV6532 [100];
    int Vg0OeH3nJvV;
    int LjQ8XDyFp;
    LjQ8XDyFp = 0;
    int oY8hrN2C;
    int l2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (char1, 100);
    cin.getline (RNAOV6532, 100);
    oY8hrN2C = strlen (char1);
    l2 = strlen (RNAOV6532);
    if (l2 > oY8hrN2C)
        ;
    oY8hrN2C = l2;
    for (Vg0OeH3nJvV = 0; oY8hrN2C >= Vg0OeH3nJvV; Vg0OeH3nJvV++) {
        if (96 < char1[Vg0OeH3nJvV])
            char1[Vg0OeH3nJvV] = char1[Vg0OeH3nJvV] - 32;
        if (96 < RNAOV6532[Vg0OeH3nJvV])
            RNAOV6532[Vg0OeH3nJvV] = RNAOV6532[Vg0OeH3nJvV] - 32;
    }
    for (Vg0OeH3nJvV = 0; Vg0OeH3nJvV <= oY8hrN2C; Vg0OeH3nJvV++) {
        if ((char1[Vg0OeH3nJvV] > RNAOV6532[Vg0OeH3nJvV]) && ((char1[Vg0OeH3nJvV] - RNAOV6532[Vg0OeH3nJvV]) != 32)) {
            cout << ">";
            LjQ8XDyFp = 1;
            break;
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
        if ((char1[Vg0OeH3nJvV] < RNAOV6532[Vg0OeH3nJvV]) && ((RNAOV6532[Vg0OeH3nJvV] - char1[Vg0OeH3nJvV]) != 32)) {
            cout << "<";
            LjQ8XDyFp = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (LjQ8XDyFp == 0)
        cout << "=";
    return 0;
}

