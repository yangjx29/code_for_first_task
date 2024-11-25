int main () {
    char str [101];
    int i;
    int j;
    int GV7HMXTs4g;
    int a;
    cin.getline (str, 101);
    GV7HMXTs4g = strlen (str);
    {
        i = 0;
        while (GV7HMXTs4g > i) {
            a = 0;
            if (!(' ' != *(str + i))) {
                for (j = i; j < GV7HMXTs4g; j++) {
                    if (*(str + j) != ' ')
                        break;
                    a++;
                }
                for (j = i + 1; j < GV7HMXTs4g; j++)
                    *(str + j) = *(str + j + a - 1);
            }
            i++;
        };
    }
    cout << str << endl;
    return 0;
}

