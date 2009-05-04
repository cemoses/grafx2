/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2007 Adrien Destugues
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/> or
    write to the Free Software Foundation, Inc.,
    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

//////////////////////////////////////////////////////////////////////////////
///@file engine.h
/// Utility functions for the menu and all windows.
//////////////////////////////////////////////////////////////////////////////

void Main_handler            (void);
void Draw_menu_button_frame(byte btn_number,byte pressed);
void Unselect_button          (int btn_number);
void Select_button             (int btn_number,byte click);
void Cancel_effects            (void);
void Restore_effects          (void);
void Open_window                (word width,word height, char * title);
void Close_window                (void);

void Open_popup                  (word x_pos, word y_pos, word width, word height);
void Close_popup                  (void);

void Window_draw_normal_bouton(word x_pos,word y_pos,word width,word height,
                                    char * title,byte undersc_letter,byte clickable);
void Window_select_normal_button(word x_pos,word y_pos,word width,word height);
void Window_unselect_normal_button(word x_pos,word y_pos,word width,word height);
void Window_draw_palette_bouton(word x_pos,word y_pos);

void Compute_slider_cursor_height(T_Scroller_button * button);
void Window_draw_slider(T_Scroller_button * button);
void Window_draw_scroller_bouton(T_Scroller_button * button);

void Window_input_content(T_Special_button * button, char * content);
void Window_clear_input_button(T_Special_button * button);
void Window_draw_input_bouton(word x_pos,word y_pos,word width_in_characters);

T_Normal_button * Window_set_normal_button(word x_pos, word y_pos,
                                   word width, word height,
                                   char * title,byte undersc_letter,
                                   byte clickable, word shortcut);
T_Normal_button * Window_set_repeatable_button(word x_pos, word y_pos,
                                   word width, word height,
                                   char * title,byte undersc_letter,
                                   byte clickable, word shortcut);

T_Palette_button * Window_set_palette_button(word x_pos, word y_pos);
void Window_clear_tags(void);
void Tag_color_range(byte start,byte end);

T_Scroller_button * Window_set_scroller_button(word x_pos, word y_pos,
                                     word height,
                                     word nb_elements,
                                     word nb_elements_visible,
                                     word initial_position);
T_Special_button * Window_set_special_button(word x_pos,word y_pos,word width,word height);
T_Special_button * Window_set_input_button(word x_pos,word y_pos,word width_in_characters);
T_Dropdown_button * Window_set_dropdown_button(word x_pos,word y_pos,word width,word height,word dropdown_width,const char *label,byte display_choice,byte display_centered,byte display_arrow,byte active_button);
void Window_dropdown_add_item(T_Dropdown_button * dropdown, word btn_number, const char *label);
void Window_dropdown_clear_items(T_Dropdown_button * dropdown);
byte Window_click_in_rectangle(short start_x,short start_y,short end_x,short end_y);
short Wait_click_in_palette(T_Palette_button * button);
void Get_color_behind_window(byte * color, byte * click);

short Window_clicked_button(void);
int Button_under_mouse(void);
short Window_get_clicked_button(void);
void Remap_window_backgrounds(byte * conversion_table, int Min_Y, int Max_Y);
void Pixel_background(int x_pos, int y_pos, byte color);