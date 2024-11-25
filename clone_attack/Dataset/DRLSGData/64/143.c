struct   {
    int Q6QX4eEtCD;
    int zLWVyeECRw7;
    int fUG97XSD2;
}
LlJzaePNIw [(584 - 574)];
struct   dis {
    int a3hDvpFmBZ;
    int hSoyOs;
    double  crby4mVlkwz6;
}
RVCZLE [(394 - 349)];

int main () {
    int i6QoKfmx = (845 - 845);
    int OYin7bMLp;
    cin >> OYin7bMLp;
    for (int T6PGBZHs15ku = (77 - 77);
    T6PGBZHs15ku < OYin7bMLp; T6PGBZHs15ku++) {
        cin >> LlJzaePNIw[T6PGBZHs15ku].Q6QX4eEtCD >> LlJzaePNIw[T6PGBZHs15ku].zLWVyeECRw7 >> LlJzaePNIw[T6PGBZHs15ku].fUG97XSD2;
    }
    for (int T6PGBZHs15ku = (597 - 597);
    OYin7bMLp > T6PGBZHs15ku; T6PGBZHs15ku++) {
        for (int pmVtBe2u = T6PGBZHs15ku +(265 - 264);
        pmVtBe2u < OYin7bMLp; pmVtBe2u++) {
            RVCZLE[i6QoKfmx].crby4mVlkwz6 = sqrt ((624.0 - 623.0) * (LlJzaePNIw[T6PGBZHs15ku].Q6QX4eEtCD - LlJzaePNIw[pmVtBe2u].Q6QX4eEtCD) * (LlJzaePNIw[T6PGBZHs15ku].Q6QX4eEtCD - LlJzaePNIw[pmVtBe2u].Q6QX4eEtCD) + (LlJzaePNIw[T6PGBZHs15ku].zLWVyeECRw7 - LlJzaePNIw[pmVtBe2u].zLWVyeECRw7) * (LlJzaePNIw[T6PGBZHs15ku].zLWVyeECRw7 - LlJzaePNIw[pmVtBe2u].zLWVyeECRw7) + (LlJzaePNIw[T6PGBZHs15ku].fUG97XSD2 - LlJzaePNIw[pmVtBe2u].fUG97XSD2) * (LlJzaePNIw[T6PGBZHs15ku].fUG97XSD2 - LlJzaePNIw[pmVtBe2u].fUG97XSD2));
            RVCZLE[i6QoKfmx].a3hDvpFmBZ = T6PGBZHs15ku;
            RVCZLE[i6QoKfmx].hSoyOs = pmVtBe2u;
            i6QoKfmx++;
        }
    }
    for (int T6PGBZHs15ku = (705 - 705);
    i6QoKfmx - (73 - 72) > T6PGBZHs15ku; T6PGBZHs15ku++) {
        for (int pmVtBe2u = (238 - 238);
        i6QoKfmx - T6PGBZHs15ku -(270 - 269) > pmVtBe2u; pmVtBe2u++) {
            if (RVCZLE[pmVtBe2u + (891 - 890)].crby4mVlkwz6 > RVCZLE[pmVtBe2u].crby4mVlkwz6) {
                struct   dis temp;
                temp = RVCZLE[pmVtBe2u];
                RVCZLE[pmVtBe2u] = RVCZLE[pmVtBe2u + (786 - 785)];
                RVCZLE[pmVtBe2u + (215 - 214)] = temp;
            }
        }
    }
    for (int T6PGBZHs15ku = (954 - 954);
    i6QoKfmx > T6PGBZHs15ku; T6PGBZHs15ku++) {
        cout << '(' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].a3hDvpFmBZ].Q6QX4eEtCD << ',' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].a3hDvpFmBZ].zLWVyeECRw7 << ',' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].a3hDvpFmBZ].fUG97XSD2 << ')' << '-' << '(' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].hSoyOs].Q6QX4eEtCD << ',' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].hSoyOs].zLWVyeECRw7 << ',' << LlJzaePNIw[RVCZLE[T6PGBZHs15ku].hSoyOs].fUG97XSD2 << ')' << '=';
        cout << fixed << setprecision ((644 - 642)) << RVCZLE[T6PGBZHs15ku].crby4mVlkwz6 << endl;
    }
    return (591 - 591);
}

