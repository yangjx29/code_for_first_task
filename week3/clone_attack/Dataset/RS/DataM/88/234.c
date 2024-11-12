int main () {
    char hg1Gn0NeUEr [(1000 - 968)];
    int idD2lP = strlen (hg1Gn0NeUEr), NJQSGk, nO7dTqBvkphu, xmVP20jebZB;
    cin.getline (hg1Gn0NeUEr, 33);
    {
        NJQSGk = 0;
        while (NJQSGk < idD2lP) {
            if (*(hg1Gn0NeUEr + NJQSGk) >= '0' && hg1Gn0NeUEr[NJQSGk] <= '9') {
                for (nO7dTqBvkphu = 1; *(hg1Gn0NeUEr + NJQSGk +nO7dTqBvkphu) >= '0' && *(hg1Gn0NeUEr + NJQSGk +nO7dTqBvkphu) <= '9'; nO7dTqBvkphu = nO7dTqBvkphu + 1)
                    ;
                for (xmVP20jebZB = 0; xmVP20jebZB < nO7dTqBvkphu; xmVP20jebZB = xmVP20jebZB + 1)
                    cout << *(hg1Gn0NeUEr + NJQSGk +xmVP20jebZB);
                NJQSGk += nO7dTqBvkphu - 1;
                cout << endl;
            }
            NJQSGk = NJQSGk +1;
        };
    }
    return 0;
}

