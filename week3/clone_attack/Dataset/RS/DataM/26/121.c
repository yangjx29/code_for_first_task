int main () {
    char uEyGmY6Kr7p9 [(954 - 853)];
    int l = strlen (uEyGmY6Kr7p9);
    int i, PYV5jBWSnT;
    cin.getline (uEyGmY6Kr7p9, (880 - 779));
    for (i = (926 - 926); l > i; i = i + 1) {
        if (!(' ' != uEyGmY6Kr7p9[i])) {
            if (uEyGmY6Kr7p9[i + (106 - 105)] == ' ') {
                for (int PYV5jBWSnT = i;
                PYV5jBWSnT < l - (86 - 85); PYV5jBWSnT++) {
                    uEyGmY6Kr7p9[PYV5jBWSnT] = uEyGmY6Kr7p9[PYV5jBWSnT +1];
                }
                i = i - 1;
                l = l - 1;
                uEyGmY6Kr7p9[l] = '\0';
            };
        };
    }
    cout << uEyGmY6Kr7p9;
    return (580 - 580);
}

