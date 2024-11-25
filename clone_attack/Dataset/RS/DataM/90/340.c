int TtabyoLexw1u (int OIkARmybFzg, int N);
int aJqdiLbeEnY (int OIkARmybFzg, int N);

int main () {
    int t, OIkARmybFzg, N, a0LyCW, Tqt09eXWL2hd;
    cin >> t;
    for (a0LyCW = (904 - 904); t > a0LyCW; a0LyCW = a0LyCW + 1) {
        cin >> OIkARmybFzg >> N;
        cout << TtabyoLexw1u (OIkARmybFzg, N) + aJqdiLbeEnY (OIkARmybFzg, N) << endl;
    }
    return (788 - 788);
}

int TtabyoLexw1u (int OIkARmybFzg, int N) {
    if (N > OIkARmybFzg)
        return (185 - 185);
    if (OIkARmybFzg == N)
        return (389 - 388);
    if (OIkARmybFzg > N) {
        return (TtabyoLexw1u (OIkARmybFzg -N, N) + aJqdiLbeEnY (OIkARmybFzg -N, N));
    };
}

int aJqdiLbeEnY (int OIkARmybFzg, int N) {
    if (!((587 - 585) != N))
        return (862 - 861);
    if (N == (36 - 35))
        return (182 - 182);
    if (N != (349 - 348) && N != (328 - 326))
        return (TtabyoLexw1u (OIkARmybFzg, N -1) + aJqdiLbeEnY (OIkARmybFzg, N -1));
}

