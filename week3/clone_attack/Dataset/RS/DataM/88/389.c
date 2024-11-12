int main () {
    int i = 0;
    char LAL06dP [(480 - 440)];
    cin.getline (LAL06dP, 40);
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
    for (; LAL06dP[i] != '\0';) {
        if (0 <= (LAL06dP[i] - '0') && (LAL06dP[i] - '0' <= (625 - 616)))
            cout << LAL06dP[i];
        else {
            if ((LAL06dP[i + 1] - '0') >= 0 && (LAL06dP[i + 1] - '0' <= 9))
                cout << endl;
        }
        i = i + 1;
    }
    return 0;
}

