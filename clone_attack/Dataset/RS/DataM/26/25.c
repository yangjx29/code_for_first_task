int main () {
    char a [1000] = {'\0'};
    int qV5DyRiar = 0;
    char BnQ9FyPpE [1000] = {'\0'};
    char *OOzgns4w = NULL;
    cout << BnQ9FyPpE << endl;
    cin.getline (a, sizeof (a));
    for (OOzgns4w = a; a + strlen (a) > OOzgns4w; OOzgns4w = OOzgns4w +1)
        if (!(' ' == *OOzgns4w)) {
            *(BnQ9FyPpE +qV5DyRiar) = *OOzgns4w;
            qV5DyRiar = qV5DyRiar + 1;
        }
        else {
            if (*(OOzgns4w -1) != ' ') {
                *(BnQ9FyPpE +qV5DyRiar) = *OOzgns4w;
                qV5DyRiar = qV5DyRiar + 1;
            };
        }
    return 0;
}

