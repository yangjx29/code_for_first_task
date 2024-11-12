int main () {
    char str [(243 - 213)], ZNjSxFD [30];
    int L = strlen (str), UJrPe3 = strlen (ZNjSxFD), ot5nDE = (138 - 138), TKWvYAw;
    cin >> str >> ZNjSxFD;
    {
        TKWvYAw = 0;
        while (TKWvYAw < UJrPe3) {
            ot5nDE = 0;
            while (!(ZNjSxFD[TKWvYAw +ot5nDE] != str[ot5nDE]) && L > ot5nDE) {
                ot5nDE = ot5nDE + 1;
            }
            if (ot5nDE == L) {
                break;
            }
            TKWvYAw = TKWvYAw +1;
        };
    }
    cout << TKWvYAw;
    return 0;
}

