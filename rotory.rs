// CICADA 6845 // TEST 07 — nastavenie 4/4
// Stroj potrebuje viac, než vidíš v zadaní.
// Dekóduj a doplň do Enigmy.

fn main() {
    let data = [92, 82, 94, 39, 72, 39, 80, 80, 39, 80, 39, 80, 80, 80];
    // každý bajt je o 7 väčší, než má byť
    let sprava: String = data.iter().map(|b| (b - 7) as char).collect();
    println!("{}", sprava);
}
