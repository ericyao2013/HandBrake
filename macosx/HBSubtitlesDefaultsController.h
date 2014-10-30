/*  HBSubtitlesDefaultsController.h $

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

@class HBSubtitlesDefaults;

@interface HBSubtitlesDefaultsController : NSWindowController

- (instancetype)initWithSettings:(HBSubtitlesDefaults *)settings;

@end
