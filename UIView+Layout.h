//
//  UIView+Layout.h
//
//  Created by Jaden Geller on 11/29/13.
//  Copyright (c) 2013 Jaden Geller. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JGLayoutParameter;

@interface UIView (Layout)

/** The left side of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the left side of the object.
 
 @code
 
 viewA.left = viewB.right; // aligns left edge of viewA to right edge of viewB
 viewC.left = viewD.left;  // aligns left edge of viewC to left edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
  
 */
@property (nonatomic) id left;

/** The right side of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the right side of the object.
 
 @code
 
 viewA.right = viewB.right; // aligns right edge of viewA to right edge of viewB
 viewC.right = viewD.left;  // aligns right edge of viewC to left edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id right;

/** The top of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the top of the object.
 
 @code
 
 viewA.top = viewB.bottom; // aligns top edge of viewA to bottom edge of viewB
 viewC.top = viewD.top;    // aligns top edge of viewC to top edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id top;

/** The bottom of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the bottom of the object.
 
 @code
 
 viewA.bottom = viewB.bottom; // aligns bottom edge of viewA to bottom edge of viewB
 viewC.bottom = viewD.top;    // aligns bottom edge of viewC to top edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id bottom;

/** The leading edge of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the leading edge of the object.
 
 @code
 
 viewA.leading = viewB.trailing; // aligns leading edge of viewA to the trailing edge of viewB
 viewC.leading = viewD.leading;  // aligns leading edge of viewC to the leading edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id leading;

/** The trailing edge of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the trailing edge of the object.
 
 @code
 
 viewA.trailing = viewB.trailing; // aligns trailing edge of viewA to the trailing edge of viewB
 viewC.trailing = viewD.leading;  // aligns trailing edge of viewC to the leading edge of viewD
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id trailing;

/** The width of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter or constant NSNumber. Used as a getter, this returns a JGLayoutParameter representing the width of the object.
 
 @code
 
 viewA.width = viewB.width; // sets viewA width to match that of viewB
 viewC.width = @50;         // sets viewC width to 50 points
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id width;

/** The height of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter or constant NSNumber. Used as a getter, this returns a JGLayoutParameter representing the height of the object.
 
 @code
 
 viewA.height = viewB.height; // sets viewA height to match that of viewB
 viewC.height = @50;          // sets viewC height to 50 points
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id height;

/** The center along the x-axis of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the center along the x-axis of the object.
 
 @code
 
 viewA.centerX = viewB.centerX; // sets viewA center along the x-axis to match that of viewB
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id centerX;

/** The center along the y-axis of the object’s alignment rectangle. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the center along the y-axis of the object.
 
 @code
 
 viewA.centerY = viewB.centerY; // sets viewA center along the y-axis to match that of viewB
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id centerY;

/** The baseline of the object. Used as a setter, this creates and adds a NSLayoutContraint based upon the specification of the assigned JGLayoutParameter. Used as a getter, this returns a JGLayoutParameter representing the baseline of the object.
 
 @code
 
 viewA.baseline = viewB.baseline; // sets viewA's baseline to match that of viewB
 
 @endcode
 
 @see https://github.com/JadenGeller/JGLayoutDotSyntax for more information.
 
 */
@property (nonatomic) id baseline;

@end
