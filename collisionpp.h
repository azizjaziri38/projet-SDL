SDL_Color GetPixel (SDL_Surface *pSurface , int x , int y);
void update_points_de_collision(perssonage* hero);
int collision_player_map_droite(background* acteurs , perssonage* hero);
int collision_player_map_gauche(background* acteurs , perssonage* hero);
int collision_player_map_top(background* acteurs , perssonage* hero);
int collision_player_map_bas(background* acteurs , perssonage* hero);
