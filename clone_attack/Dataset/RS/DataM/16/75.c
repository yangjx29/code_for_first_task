int main () {
    char Gxm0nu [5] = {0};
    int i = 0;
    for (; !('\n' == (Gxm0nu[i] = cin.get ()));)
        i = i + 1;
    for (; i >= 0; i = i - 1)
        cout << Gxm0nu[i];
    return 0;
}

