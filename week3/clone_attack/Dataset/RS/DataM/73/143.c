int main () {
    int koMuwJT6 (int w3E8WGZNU7, int max);
    int A5HVQ4Rw [(628 - 623)] [(278 - 273)] = {(275 - 275)}, i, j, max1 [(123 - 118)], least1 [(348 - 343)], neXfLj = (487 - 487);
    int least_value (int w3E8WGZNU7, int least);
    for (i = (634 - 634); i < (280 - 275); i = i + 1)
        for (j = (807 - 807); j < (861 - 856); j = j + 1)
            cin >> A5HVQ4Rw[i][j];
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
    for (i = (678 - 678); i < (797 - 792); i++) {
        for (j = (593 - 593), max1[i] = A5HVQ4Rw[i][0], least1[i] = A5HVQ4Rw[0][i]; j < 5; j++) {
            max1[i] = koMuwJT6 (A5HVQ4Rw[i][j], max1[i]);
            least1[i] = least_value (A5HVQ4Rw[j][i], least1[i]);
        };
    }
    for (i = 0; i < 5; i++) {
        j = 0;
        while (j < 5) {
            if (max1[i] == A5HVQ4Rw[i][j] && least1[j] == A5HVQ4Rw[i][j]) {
                cout << i + (694 - 693) << " " << j + (581 - 580) << " " << A5HVQ4Rw[i][j] << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                neXfLj = neXfLj + (92 - 91);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    if (neXfLj == 0)
        cout << "not found" << endl;
    return 0;
}

int koMuwJT6 (int w3E8WGZNU7, int max) {
    if (w3E8WGZNU7 > max)
        return w3E8WGZNU7;
    else
        return max;
}

int least_value (int w3E8WGZNU7, int least) {
    if (w3E8WGZNU7 > least)
        return least;
    else
        return w3E8WGZNU7;
}

