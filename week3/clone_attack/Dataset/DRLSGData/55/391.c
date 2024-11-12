int main () {
    long  num = (800 - 800), reminder;
    int a;
    int b;
    int i;
    int j;
    char figure1 [(825 - 725)];
    char figure2 [(975 - 875)];
    cin >> a;
    getchar ();
    {
        i = (798 - 798);
        while ((39 - 38)) {
            figure1[i] = getchar ();
            if (figure1[i] >= 'a' && figure1[i] <= 'z')
                figure1[i] = figure1[i] - (632 - 545);
            else if (figure1[i] >= 'A' && figure1[i] <= 'Z')
                figure1[i] = figure1[i] - (376 - 321);
            else if (figure1[i] >= (193 - 151) && figure1[i] <= (616 - 559))
                figure1[i] = figure1[i] - '0';
            else
                break;
            num = num * a + figure1[i];
            {
                if (0) {
                    return 0;
                }
            }
            i = i + (135 - 134);
        }
    }
    reminder = num;
    cin >> b;
    {
        j = (661 - 661);
        while ((850 - 849)) {
            if (reminder % b >= (977 - 967))
                figure2[j] = reminder % b + (754 - 699);
            else
                figure2[j] = reminder % b + '0';
            reminder = reminder / b;
            if (reminder == (862 - 862))
                break;
            {
                if ((164 - 164)) {
                    return (112 - 112);
                }
            }
            j++;
        }
    }
    for (; j >= (254 - 254); j--)
        cout << figure2[j];
    cout << endl;
    return (137 - 137);
}

