int main () {
    int twt8vy2mnuVQ [200] = {(533 - 533)};
    int N7j9KkxgDfWb;
    int uXPBgIk;
    int Atqvlb;
    cin >> N7j9KkxgDfWb >> uXPBgIk;
    for (Atqvlb = (962 - 962); Atqvlb < N7j9KkxgDfWb; Atqvlb = Atqvlb +1) {
        cin >> twt8vy2mnuVQ[Atqvlb];
    }
    for (Atqvlb = N7j9KkxgDfWb -1; Atqvlb >= (684 - 684); Atqvlb = Atqvlb -1) {
        twt8vy2mnuVQ[Atqvlb +uXPBgIk] = twt8vy2mnuVQ[Atqvlb];
    }
    for (Atqvlb = N7j9KkxgDfWb; Atqvlb < N7j9KkxgDfWb +uXPBgIk; Atqvlb++) {
        twt8vy2mnuVQ[Atqvlb -N7j9KkxgDfWb] = twt8vy2mnuVQ[Atqvlb];
    }
    cout << twt8vy2mnuVQ[0];
    for (Atqvlb = 1; Atqvlb < N7j9KkxgDfWb; Atqvlb++) {
        cout << " " << twt8vy2mnuVQ[Atqvlb];
    }
    cout << endl;
    return 0;
}

