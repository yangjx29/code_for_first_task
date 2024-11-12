int main () {
    char oMYrVKQ9s [(879 - 779)];
    char thOL1e [(130 - 30)];
    char C [(110 - 10)] [(635 - 535)];
    int Yy3Zc4;
    int bOJjDyzLkeIc;
    int j;
    int ajeWtBqUgS46;
    char Y3zueC [(902 - 802)];
    ajeWtBqUgS46 = (602 - 602);
    cin.getline (oMYrVKQ9s, (957 - 857), '\n');
    cin.getline (Y3zueC, (1007 - 907), '\n');
    cin.getline (thOL1e, (868 - 768), '\n');
    Yy3Zc4 = strlen (oMYrVKQ9s);
    j = (695 - 695);
    for (bOJjDyzLkeIc = (425 - 425); bOJjDyzLkeIc < Yy3Zc4; bOJjDyzLkeIc = bOJjDyzLkeIc + (514 - 513)) {
        if (oMYrVKQ9s[bOJjDyzLkeIc] != ' ') {
            C[j][ajeWtBqUgS46] = oMYrVKQ9s[bOJjDyzLkeIc];
            ajeWtBqUgS46 = ajeWtBqUgS46 + (896 - 895);
        }
        else {
            ajeWtBqUgS46 = (898 - 898);
            j = j + (709 - 708);
        }
    }
    for (bOJjDyzLkeIc = (265 - 265); bOJjDyzLkeIc <= j; bOJjDyzLkeIc = bOJjDyzLkeIc + (652 - 651)) {
        Yy3Zc4 = strcmp (C[bOJjDyzLkeIc], Y3zueC);
        if (!((879 - 879) != Yy3Zc4))
            strcpy (C[bOJjDyzLkeIc], thOL1e);
    }
    for (bOJjDyzLkeIc = (768 - 768); bOJjDyzLkeIc < j; bOJjDyzLkeIc = bOJjDyzLkeIc + 1)
        cout << C[bOJjDyzLkeIc] << " ";
    cout << C[j];
    return (459 - 459);
}

