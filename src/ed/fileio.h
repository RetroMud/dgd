/*
 * This file is part of DGD, http://www.dworkin.nl/dgd/
 * Copyright (C) 1993-2010 Dworkin B.V.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

typedef struct {
    Int lines;	/* number of lines */
    Int chars;	/* number of characters */
    Int zero;	/* number of zeroes discarded */
    Int split;	/* number of splits of too long lines */
    bool ill;	/* incomplete last line */
} io;

extern bool io_load P((editbuf*, char*, Int, io*));
extern bool io_save P((editbuf*, char*, Int, Int, int, io*));
