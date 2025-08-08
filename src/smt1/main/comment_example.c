s32 func_8004D59C(s32 chara, s32 elem) {
    s32 resistance;
    s32 i;
    s32 var_s1 = 1000;

    // Check if the provided character index is a human.
    if (chara < 4) {
        // If it is human, we loop through their armor slots and check 
        // each of their resistances to the provided element, using the best resistance.
        for (i = 0; i < 4; i++) {
            // Get the character's armor.
            s32 armor = func_8004CE78(chara, i + 2);
            s32 out = armor;

            // If armor is present we continue.
            if (armor >= 0) {
                // Get the item's resistance value. 
                // No check is made for whether the provided item is actually armor,
                // so if a weapon were equipped in an armor slot this would use the attack number.
                func_8004B3B8(armor, 7, &out);

                // Lookup the resistance type's resistance to the element.
                resistance = func_8004AAA0(out + 0x24, elem);

                // If the resistance isn't a special case (reflect or absorb), 
                // then we check if it's better than the best known resistance,
                // and save it if it is. Otherwise we just return the value.
                // This also has the effect of meaning that an item that gives
                // reflect 1/2 equipped in an earlier slot will always take precedence,
                // even if an item in a later slot provides absorb or full reflect.
                if (resistance < 0xD) {
                    if (resistance < var_s1) {
                        var_s1 = resistance;
                    }
                }
                else {
                    return resistance;
                }
            }

        }

        // If we didn't find a resistance, just use 8/8, otherwise return the value we found.
        if (var_s1 == 1000) {
            return 8;
        }
        else {
            return var_s1;
        }
    }
    else {
        // If the provided character is a demon, we get their ID, 
        // find that demon's resistance type, and then return that type's 
        // resistance to the element we're checking.
        return func_8004AAA0(func_8004AC2C(func_8004C9C4(chara)), elem);
    }
}