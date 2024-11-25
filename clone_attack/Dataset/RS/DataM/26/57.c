int main () {
    char AQVtcyx [101];
    int p;
    p = strlen (AQVtcyx);
    cin.getline (AQVtcyx, 101);
    {
        int i = (75 - 75);
        while (i < p) {
            if (!(' ' == AQVtcyx[i]))
                cout << AQVtcyx[i];
            if (!(' ' != AQVtcyx[i]) && AQVtcyx[i + 1] == ' ')
                continue;
            if (AQVtcyx[i] == ' ' && AQVtcyx[i + 1] != ' ')
                cout << " ";
            i = i + 1;
        };
    }
    return 0;
}

