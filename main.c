// Marvish Chandra
#include <stdio.h>

public static void foodAllergies(string[] food){
	if food == "lactose product":
	printf("Either avoid these dairy products, consume alternative lactose products, or take lactose medication to avoid bloating.")
	if food == "eggs":
	printf("Either avoid these products, or if you have consumed these, make sure to take antihistamines.")
	if food == "shellfish":
	printf("Best thing to do is to avoid these products. Doctors may reccomend taking epinephrine (EpiPen), Auvi-Q, or Adrenaclick to reduce these symptoms.")
    if food == "wheat":
    printf("Avoid these products because of gluten found in the flour of these goods.")
    if food == "peanuts":
    printf("Avoid products containing this, this is especially found in candy bars, pastries, or cakes. If a reaction occurs, make sure to take an epinephrine (EpiPen) injectable.")
    if food == "tree nuts":
    printf("Avoid the following products: almonds, walnuts, pecans, hazelnuts, pine nuts, and lychee nuts. If a reaction occurs, make sure to take an epinephrine (EpiPen) injectable.")
    if food == "soy":
    printf("The following soy products are to be avoided: foods with soy lecithin, soy milk, and soy sauce.")
	else: printf("Either your food allergy is invalid or it is a different allergy that does not concern food.")
    return 0;
}
public static void animalAllergies(string[] animal){
	if animal == "cat":
	printf("Symptoms of this occur after being in contact with cat dander, saliva, or urine. In this circumstance, you should take anithistamines such as Benadryl, Claritin, or Zyrtec.")
	if animal == "dog":
    printf("Symptoms of this occur after being in contact with cat dander, saliva, or urine. In this circumstance, take antihistamines such as Benadryl, Claritin, Allegra, and Clarinex OTC.")
	else: printf("Either you are not affected by a cat or dog or your given animal is not described to cause a particular allergy.")
    return 0;
}
public static void pollen(string[] outdoorpollen){
    if pollen == "tree":
    printf("This may cause hay fever. Treat this condition by taking nasal spray or use decongestants to make it easier to breathe.")
    if pollen == "plants":
    printf("This may cause hay fever. Treat this condition by taking nasal spray or use decongestants to make it easier to breathe.")
    if pollen == "grass":
    printf("This may cause hay fever. Treat this condition by taking nasal spray or use decongestants to make it easier to breathe.")
    else: printf("Either you are not affected by a pollen pollutant or the source is not described here.")
    return 0;
}
public static void mold(string[] mold){
    if mold == "mold spores":
    printf("This may cause hay fever. Treat this condition by taking nasal spray or use decongestants to make it easier to breathe.")
    return 0;
    else: printf("Either you are not affected by mold symptoms or you have a different outdoor allergy.")
}
public static void termites(string[] termites){
    if termites == "dust mites":
    printf("Treat this condition by taking nasal spray or use decongestants to make it easier to breathe. Avoid areas with a lot of dust, so you don't breathe that in.")
    return 0;
    else: printf("Either you are not affected by termites or you have a different outdoor allergy.")
}

public static void medications(string[] medicine){
    if medicine == "penicillin":
    printf("You may have symptoms of hives, rash, and itching. Avoid the drug if possible because of the side effects you have.")
    if medicine == "other":
    printf("Identify what medication or multiple medications you are taking. Understand the potential side effects that are possible and research treatment options.")
    else: printf("Either you are not affected by medications or your medication has an invalid input.")
    return 0;
}
public static void latexMaterial(string[] latex){
    if latex == "medical materials":
    printf("Alternatively, bring your own equipment that is not made with latex material. Secondly, be wary what side effects you get from Latex.")
    else: printf("Either you are not affected by latex or you have a symptoms coming from somewhere else.")
    return 0;
    
}
public static void insectStings(string[] insects){
    if insects == "bee stings":
    printf("If the bee has left a stinger, apply first aid remiedies such as using a credit card or tweezers to remove it. Then, apply the area with lotion or pain cream. If further reactions develop, take anithistamines such as Benadryl.")
    if insects == "bug bites":
    printf("Remove the bug from your skin that it has effected. Apply pain cream or Neosporin around the area for treatment. If further reactions develop, take anithistamines such as Benadryl.")
    if insects == "cockroaches":
    printf("These often cause bites or its feces can cause allergic reactions. Apply pain cream or other relieving substances to cure this condition.")
    else: printf("Either you are not affected by these insects or you have a different allergy.")
    return 0;
}
public static void householdChemicals(string[] perfumes){
    if perfumes == "air fresheners":
    printf("Either wear a mask when using these or ask someone else to apply these fresheners to avoid direct contact.")
    if perfumes == "colognes" ? "perfumes":
    printf("Generally avoid using these products on yourself and seek natural methods such as using deodrized soaps.")
    else: printf("Either you are not affected by such chemicals or you have symptoms coming from somwehere else.")
    return 0;
}