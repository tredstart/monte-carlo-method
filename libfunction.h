//
// Created by cydev on 12.12.2019.
//

#ifndef MONTE_CARLO_METHOD_LIBFUNCTION_H
#define MONTE_CARLO_METHOD_LIBFUNCTION_H

void create_linked_list(QueueList *queueList, char id, unsigned int *age);

void create_list_of_old(QueueList *list, QueueList *list_of_old, int time_of_death);
void print_animal_to_file(QueueList *animal_list, char *mode);
void build_pairs(QueueList *list);
void pregnancy_run(QueueList *list, int pregnancy_limit, double *similarity, int children, int array_length);
void hunting_on_rabbits(QueueList *rabbits, QueueList *wolves,QueueList *dead_rabbits,QueueList *dead_wolves, int week, double rabbits_per_kits);
void flush_animals_from_memory(QueueList *list);

#endif //MONTE_CARLO_METHOD_LIBFUNCTION_H
