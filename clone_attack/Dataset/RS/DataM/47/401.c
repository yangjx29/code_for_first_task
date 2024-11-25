int FRElNSDo0ujn [100], n, i = 0;

void  change () {
    cin >> FRElNSDo0ujn[i];
    i = i + 1;
    if (n > i)
        change ();
    i = i - 1;
    if (i != 0)
        cout << FRElNSDo0ujn[i] << " ";
    else
        cout << FRElNSDo0ujn[i];
}

int main () {
    cin >> n;
    change ();
    return 0;
}

