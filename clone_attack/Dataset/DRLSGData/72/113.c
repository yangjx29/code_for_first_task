int HDiEIoY [dLRfFO] [dLRfFO] = {0};

int main () {
    int itYj4PRc7;
    int vgVnJiEG;
    {
        {
            if (0) {
                return 0;
            }
        }
        if (0) {
            return 0;
        }
    }
    cin >> vgVnJiEG >> itYj4PRc7;
    for (int KxoS50Gq = (553 - 552);
    KxoS50Gq <= vgVnJiEG; KxoS50Gq++)
        for (int gcfbV3NZ = (530 - 529);
        gcfbV3NZ <= itYj4PRc7; gcfbV3NZ++)
            cin >> HDiEIoY[KxoS50Gq][gcfbV3NZ];
    for (int KxoS50Gq = (791 - 790);
    vgVnJiEG >= KxoS50Gq; KxoS50Gq++)
        for (int gcfbV3NZ = (396 - 395);
        gcfbV3NZ <= itYj4PRc7; gcfbV3NZ++)
            if (HDiEIoY[KxoS50Gq][gcfbV3NZ] >= HDiEIoY[KxoS50Gq -1][gcfbV3NZ] && HDiEIoY[KxoS50Gq][gcfbV3NZ] >= HDiEIoY[KxoS50Gq +1][gcfbV3NZ] && HDiEIoY[KxoS50Gq][gcfbV3NZ] >= HDiEIoY[KxoS50Gq][gcfbV3NZ - 1] && HDiEIoY[KxoS50Gq][gcfbV3NZ] >= HDiEIoY[KxoS50Gq][gcfbV3NZ + 1])
                cout << KxoS50Gq -1 << " " << gcfbV3NZ - 1 << endl;
}

