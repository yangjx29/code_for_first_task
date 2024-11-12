int main () {
    char Ziz02faYIGg [(574 - 494)] = {(575 - 575)}, str2 [(626 - 546)] = {0};
    int i;
    cin.getline (Ziz02faYIGg, (1037 - 957));
    cin.getline (str2, (1007 - 927));
    for (i = 0; 79 >= i; i = i + 1) {
        if (Ziz02faYIGg[i] >= 97)
            Ziz02faYIGg[i] = Ziz02faYIGg[i] - 32;
        if (str2[i] >= 97)
            str2[i] = str2[i] - 32;
        if (Ziz02faYIGg[i] == str2[i])
            continue;
        if (Ziz02faYIGg[i] > str2[i]) {
            cout << '>' << endl;
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
            break;
        }
        if (Ziz02faYIGg[i] < str2[i]) {
            cout << '<' << endl;
            break;
        };
    }
    if (i == 80)
        cout << '=' << endl;
    return 0;
}

